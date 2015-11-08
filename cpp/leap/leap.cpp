#include "leap.h"

namespace
{

bool is_divisible(int numerator, int divisor) {
  return numerator % divisor == 0;
}

bool is_doubly_even(int numerator) {
  return is_divisible(numerator, 4);
}

bool is_century(int year) {
  return is_divisible(year, 100);
}

bool is_century_leap_year(int year) {
  return is_divisible(year, 400);
}

}

namespace leap
{

bool is_leap_year(int year) {
  return is_century_leap_year(year) || (is_doubly_even(year) && !is_century(year));
}

} // end namespace leap
