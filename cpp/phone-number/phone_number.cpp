#include "phone_number.h"
#include "boost/algorithm/string/regex.hpp"
#include "boost/regex.hpp"

using namespace std;
using namespace boost;

phone_number::phone_number(string textFormatNumber) {
  // Strip anything that is not a digit from the phone number
  _phone_number = erase_all_regex_copy(textFormatNumber, regex("[^0-9]"));
}

const string phone_number::number() const {
  return _phone_number;
}
