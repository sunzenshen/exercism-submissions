#ifndef _PHONE_NUMBER_H
#define _PHONE_NUMBER_H

#include <string>

class phone_number {

public:
  phone_number(std::string textFormatNumber);
  const std::string number() const;
  const std::string area_code() const;
  operator std::string() const;

private:
  std::string _phone_number;

  const std::string prefix() const;
  const std::string line_number() const;
};

#endif

