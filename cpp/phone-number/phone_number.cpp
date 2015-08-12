#include "phone_number.h"
#include "boost/algorithm/string/regex.hpp"
#include "boost/regex.hpp"

using namespace std;
using namespace boost;

const size_t AREA_CODE_LENGTH = 3;
const size_t PREFIX_LENGTH = 3;
const size_t LINE_NUMBER_LENGTH = 4;

phone_number::phone_number(string textFormatNumber) {
  // Strip anything that is not a digit from the phone number
  _phone_number = erase_all_regex_copy(textFormatNumber, regex("[^0-9]"));
  // Call is possibly a long distance number
  if ((_phone_number.length() == 11) && (_phone_number[0] == '1')) {
    _phone_number = _phone_number.substr(1);
  } else if (_phone_number.length() != 10) {
    _phone_number = "0000000000";
  }
}

const string phone_number::number() const {
  return _phone_number;
}

const string phone_number::area_code() const {
  if (_phone_number.length() >= AREA_CODE_LENGTH) {
    return _phone_number.substr(0, AREA_CODE_LENGTH);
  }
  return "Can't determine area code, unexpected phone number: " + _phone_number;
}

const string phone_number::prefix() const {
  if (_phone_number.length() >= AREA_CODE_LENGTH + PREFIX_LENGTH) {
    return _phone_number.substr(AREA_CODE_LENGTH, PREFIX_LENGTH);
  }
  return "Can't determine prefix, unexpected phone number: " + _phone_number;
}

const string phone_number::line_number() const {
  if (_phone_number.length() >= AREA_CODE_LENGTH + PREFIX_LENGTH + LINE_NUMBER_LENGTH) {
    return _phone_number.substr(AREA_CODE_LENGTH+PREFIX_LENGTH, LINE_NUMBER_LENGTH);
  }
  return "Can't determine line-number, unexpected phone number: " + _phone_number;
}

phone_number:: operator string() const {
  return "(" + area_code() + ") " + prefix() + "-" + line_number();
}
