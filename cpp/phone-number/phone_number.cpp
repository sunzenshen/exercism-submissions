#include "phone_number.h"
#include "boost/algorithm/string/regex.hpp"
#include "boost/regex.hpp"

using namespace std;
using namespace boost;

phone_number::phone_number(string textFormatNumber) {
  // Strip anything that is not a digit from the phone number
  _phone_number = erase_all_regex_copy(textFormatNumber, regex("[^0-9]"));
  // Call is possibly a long distance number
  if ((_phone_number.length() == 11) && (_phone_number[0] == '1')) {
    _phone_number = _phone_number.substr(1);
  }
}

const string phone_number::number() const {
  return _phone_number;
}
