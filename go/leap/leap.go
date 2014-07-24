package leap

// IsLeapYear returns whether the input year is a leap year.
func IsLeapYear(year int) bool {
	if (year%4 == 0) && !isInvalidCentury(year) {
		return true
	}
	return false
}

func isInvalidCentury(year int) bool {
	if year%100 == 0 {
		if year%400 != 0 {
			return true
		}
	}
	return false
}
