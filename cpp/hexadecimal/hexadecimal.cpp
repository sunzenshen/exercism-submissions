#include "hexadecimal.h"
#include <cctype>
#include <numeric>
#include <stdexcept>

namespace
{
  int hexitToDigit(const char hexit)
  {
    if (isalpha(hexit))
    {
      const auto alphaOffset = tolower(hexit) - 'a' + 10;
      if (alphaOffset > 16)
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

int hexadecimal::convert(const std::string& hex)
{
  try
  {
    return std::accumulate(hex.begin(), hex.end(), 0,
                           [](int acc, int hexit) { return hexitToDigit(hexit)  +  acc * 16; });
  }
  catch (std::invalid_argument)
  {
    return 0;
  }
}
