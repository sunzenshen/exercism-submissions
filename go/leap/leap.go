package leap

// IsLeapYear returns whether the input year is a leap year.
func IsLeapYear(year int) bool {
	return isLeapNonCentury(year) || isLeapCentury(year)
}

func isLeapNonCentury(year int) bool {
	return (year%4 == 0) && (year%100 != 0)
}

func isLeapCentury(year int) bool {
	return year%400 == 0
}
