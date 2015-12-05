package allergies

import "sort"

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
	// Need to list allergens in order of scores to pass exercism tests
	sort.Sort(byScore(allergens))
	return allergens
}

// AllergicTo determines if a score matches a given allergen.
func AllergicTo(score int, allergen string) bool {
	return (score & allergenMap[allergen]) > 0
}

// For sorting the allergens list by their scores
type byScore []string

// Len of list of allergens is number of entries as usual
func (a byScore) Len() int { return len(a) }

// Swap of allergen elements is also a simple index swap
func (a byScore) Swap(i, j int) { a[i], a[j] = a[j], a[i] }

// Less comparison of allergen elements performs a lookup in the allergenMap
func (a byScore) Less(i, j int) bool { return allergenMap[a[i]] < allergenMap[a[j]] }
