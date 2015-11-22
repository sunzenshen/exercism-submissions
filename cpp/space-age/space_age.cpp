#include "space_age.h"

namespace
{
  const unsigned int EARTH_SECONDS_PER_YEAR = 31557600;
  const double MERCURY_ORBITAL_PERIOD_VS_EARTH = 0.2408467;
}

namespace space_age
{

double space_age::on_earth() const
{
  return (double)age_in_seconds_ / EARTH_SECONDS_PER_YEAR;
}

double space_age::on_mercury() const
{
  return on_earth() / MERCURY_ORBITAL_PERIOD_VS_EARTH;
}

} // end namespace space_age