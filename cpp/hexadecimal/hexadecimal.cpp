#include "hexadecimal.h"
#include <cctype>
#include <cmath>
#include <stdexcept>

using namespace std;

namespace
{
  int digitHexToDec(char hex)
  {
    if (isdigit(hex)) {
      return hex - '0';
    }
    else if (not isalpha(hex)) {
      throw domain_error("A hex digit to convert is not alpha/numeric.");
    }

    // process alpha characters
    const auto alphaOffset = tolower(hex) - 'a' + 10;
    if (alphaOffset > 16) {
      throw domain_error("A hex digit to convert is an alpha that's outside the range A-F.");
    }
    return alphaOffset;
  }

} // end anonymous namespace

int hexadecimal::convert(std::string hex)
{
  int acc(0);
  auto hexPlace = hex.length() - 1;
  try
  {
    for (auto digit : hex)
    {
      acc += digitHexToDec(digit) * pow(16, hexPlace);
      --hexPlace;
    }
    return acc;
  }
  catch (domain_error)
  {
    return 0;
  }
}
