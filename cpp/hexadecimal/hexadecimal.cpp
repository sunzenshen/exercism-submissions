#include "hexadecimal.h"
#include <cctype>
#include <numeric>
#include <stdexcept>

namespace
{
  size_t hexitToDigit(const char hexit)
  {
    if (isalpha(hexit))
    {
      const auto alphaOffset = tolower(hexit) - 'a' + 10UL;
      if (alphaOffset > 16UL)
      {
        throw std::invalid_argument("A hex digit to convert is an alpha that's outside the range A-F.");
      }
      return alphaOffset;
    }
    else if (isdigit(hexit))
    {
      return hexit - '0';
    }
    else
    {
      throw std::invalid_argument("A hex digit to convert is not alpha/numeric.");
    }

  }

} // end anonymous namespace

size_t hexadecimal::convert(const std::string& hex)
{
  try
  {
    return std::accumulate(hex.begin(), hex.end(), 0UL,
                           [](size_t acc, size_t hexit) { return hexitToDigit(hexit)  +  acc * 16UL; });
  }
  catch (std::invalid_argument)
  {
    return 0UL;
  }
}
