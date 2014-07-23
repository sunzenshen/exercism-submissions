package leap

// IsLeapYear returns whether the input year is a leap year.
func IsLeapYear(year int) bool {
	if (year%4 == 0) && (year%100 != 0) {
		// A leap year occurs on very year that is evenly divisible by 4
		//   except when the year is also evenly divisible by 100
		return true
	} else if year%400 == 0 {
		// Exception of the exception. Divisibility tests for 4 and 100 implicit.
		return true
	}
	return false
}
