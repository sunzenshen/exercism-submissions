#include "space_age.h"

namespace
{
  const unsigned int EARTH_SECONDS_PER_YEAR = 31557600;
}

namespace space_age
{

double space_age::on_earth() const
{
  return (double)age_in_seconds_ / EARTH_SECONDS_PER_YEAR;
}

} // end namespace space_age
