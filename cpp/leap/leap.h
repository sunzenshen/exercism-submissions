#ifndef LEAP_H
#define LEAP_H

namespace
{

bool is_divisible(int numerator, int divisor) {
  return numerator % divisor == 0;
}

bool is_century(int year) {
  return is_divisible(year, 100);
}

}

namespace leap
{

bool is_leap_year(int year) {
  return is_divisible(year, 4) && !is_century(year);
}

} // end namespace leap

#endif
