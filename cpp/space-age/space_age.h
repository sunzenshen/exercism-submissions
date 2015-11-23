#ifndef SPACE_AGE_H
#define SPACE_AGE_H

namespace space_age
{

class space_age
{
public:
  // Input age in seconds
  space_age(long age_in_seconds) : age_in_seconds_(age_in_seconds) {}

  // Age in seconds
  long seconds() const {return age_in_seconds_;}

  // Age in "years" for the following planets:
  double on_earth() const;
  double on_mercury() const;
  double on_venus() const;
  double on_mars() const;
  double on_jupiter() const;
  double on_saturn() const;
  double on_uranus() const;
  double on_neptune() const;

private:
  long age_in_seconds_;
}; // end class space_age

} // end namespace space_age

#endif
