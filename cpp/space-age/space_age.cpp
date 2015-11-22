#include "space_age.h"

namespace
{
  const unsigned int EARTH_SECONDS_PER_YEAR = 31557600;
  const double MERCURY_ORBITAL_PERIOD_VS_EARTH = 0.2408467;
  const double VENUS_ORBITAL_PERIOD_VS_EARTH = 0.61519726;
  const double MARS_ORBITAL_PERIOD_VS_EARTH = 1.8808158;
  const double JUPITER_ORBITAL_PERIOD_VS_EARTH = 11.862615;
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

double space_age::on_venus() const
{
  return on_earth() / VENUS_ORBITAL_PERIOD_VS_EARTH;
}

double space_age::on_mars() const
{
  return on_earth() / MARS_ORBITAL_PERIOD_VS_EARTH;
}

double space_age::on_jupiter() const
{
  return on_earth() / JUPITER_ORBITAL_PERIOD_VS_EARTH;
}

} // end namespace space_age
