#ifndef GRAINS_H
#define GRAINS_H

#include <math.h>

namespace grains
{

// Returns the number of grains at a given square position
unsigned long long square(int position) {
  return pow(2, position-1);
}

} // end namespace grains

#endif
