package binary

import "errors"
import "math"

// ParseBinary takes a binary number represented by a string,
// and returns the decimal value.
func ParseBinary(binary string) (int, error) {
	var decimal int
	numDigits := len(binary)
	power := 0
	for i := numDigits - 1; i >= 0; i, power = i-1, power+1 {
		if binary[i] == '1' {
			decimal = decimal + int(math.Pow(float64(2), float64(power)))
		} else if binary[i] != '0' {
			// Encountered a rune that cannot possibly be from a binary number
			return -1, errors.New("binary string input had invalid character that was not 0 or 1")
		}
	}
	return decimal, nil
}
