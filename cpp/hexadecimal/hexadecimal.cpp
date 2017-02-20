#include "hexadecimal.h"
#include <cctype>

using namespace std;

namespace
{
  int digitHexToDec(char hex)
  {
    if (isdigit(hex))
      return hex - '0';

    // TODO: catch invalid hex characters
    return tolower(hex) - 'a' + 10;
  }

} // end anonymous namespace

int hexadecimal::convert(std::string hex)
{
  // TODO: process the other characters in the hex string
  return digitHexToDec(hex[0]);
}
