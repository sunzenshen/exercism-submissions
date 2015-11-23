#include "space_age.h"

namespace
{
// Conversion constants
const long EARTH_SECONDS_PER_YEAR = 31557600;
const double MERCURY_ORBITAL_PERIOD_VS_EARTH = 0.2408467;
const double VENUS_ORBITAL_PERIOD_VS_EARTH = 0.61519726;
const double MARS_ORBITAL_PERIOD_VS_EARTH = 1.8808158;
const double JUPITER_ORBITAL_PERIOD_VS_EARTH = 11.862615;
const double SATURN_ORBITAL_PERIOD_VS_EARTH = 29.447498;
const double URANUS_ORBITAL_PERIOD_VS_EARTH = 84.016846;
const double NEPTUNE_ORBITAL_PERIOD_VS_EARTH = 164.79132;
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

double space_age::on_saturn() const
{
  return on_earth() / SATURN_ORBITAL_PERIOD_VS_EARTH;
}

double space_age::on_uranus() const
{
  return on_earth() / URANUS_ORBITAL_PERIOD_VS_EARTH;
}

double space_age::on_neptune() const
{
  return on_earth() / NEPTUNE_ORBITAL_PERIOD_VS_EARTH;
}

} // end namespace space_age
