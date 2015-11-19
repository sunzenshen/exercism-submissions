#ifndef SPACE_AGE_H
#define SPACE_AGE_H

namespace space_age
{

class space_age
{
public:
  space_age(unsigned int age_in_seconds) : age_in_seconds_(age_in_seconds) {}

private:
  unsigned int age_in_seconds_;
}; // end class space_age

} // end namespace space_age

#endif
