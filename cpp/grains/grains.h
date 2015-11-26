#ifndef GRAINS_H
#define GRAINS_H

#include <math.h>

namespace grains
{

// Returns the number of grains at a given square position
unsigned long long square(int position) {
  return pow(2, position-1);
}

// Returns the total number of grains on the board
unsigned long long total() {
  unsigned long long sum = 0;
  for (int i=1; i<=64; ++i) {
    sum += square(i);
  }
  return sum;
}

} // end namespace grains

#endif
