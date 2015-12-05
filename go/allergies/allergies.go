package allergies

var allergenMap = map[string]int{
	"eggs":         1,
	"peanuts":      2,
	"shellfish":    4,
	"strawberries": 8,
	"tomatoes":     16,
	"chocolate":    32,
	"pollen":       64,
	"cats":         128,
}

// Allergies takes a score and returns all allergies included.
func Allergies(score int) []string {
	var allergens []string
	for allergen, bitValue := range allergenMap {
		if score&bitValue > 0 {
			allergens = append(allergens, allergen)
		}
	}
	return allergens
}

// AllergicTo determines if a score matches a given allergen.
func AllergicTo(score int, allergen string) bool {
	return (score & allergenMap[allergen]) > 0
}
