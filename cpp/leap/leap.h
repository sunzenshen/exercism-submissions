#ifndef LEAP_H
#define LEAP_H

namespace
{

bool is_divisible(int numerator, int divisor) {
  return numerator % divisor == 0;
}

}

namespace leap
{

bool is_leap_year(int year) {
  return is_divisible(year, 4);
}

} // end namespace leap

#endif
