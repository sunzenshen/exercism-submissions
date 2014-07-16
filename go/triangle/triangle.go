package triangle

import "math"

// Kind describes the category of a triangle's dimensions
type Kind string

const (
	// Equ is an equilateral triangle
	Equ Kind = "Equilateral"
	// Iso is an isosceles triangle
	Iso = "Isosceles"
	// Sca is a scalene triangle
	Sca = "Scalene"
	// NaT is not a triangle
	NaT = "Not-a-triangle"
)

// KindFromSides determines the type of triangle possible from 3 side lengths
func KindFromSides(a, b, c float64) Kind {
	if a+b <= c || b+c <= a || a+c <= b ||
		a <= 0 || b <= 0 || c <= 0 ||
		math.IsNaN(a) || math.IsNaN(b) || math.IsNaN(c) {
		return NaT
	} else if a == b && b == c {
		return Equ
	} else if a == b || b == c || c == a {
		return Iso
	}
	return Sca
}
