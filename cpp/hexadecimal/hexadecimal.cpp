#include "hexadecimal.h"
#include <cctype>
#include <stdexcept>

using namespace std;

namespace
{
  int digitHexToDec(const char hex)
  {
    if (isalpha(hex))
    {
      const auto alphaOffset = tolower(hex) - 'a' + 10;
      if (alphaOffset > 16)
      {
        throw domain_error("A hex digit to convert is an alpha that's outside the range A-F.");
      }
      return alphaOffset;
    }
    else if (isdigit(hex))
    {
      return hex - '0';
    }
    else
    {
      throw domain_error("A hex digit to convert is not alpha/numeric.");
    }

  }

} // end anonymous namespace

int hexadecimal::convert(const std::string& hex)
{
  try
  {
    int acc(0);
    auto hexPlace = hex.length() - 1;
    for (auto digit : hex)
    {
      acc = digitHexToDec(digit)  +  acc * 16;
      --hexPlace;
    }
    return acc;
  }
  catch (domain_error)
  {
    return 0;
  }
}
