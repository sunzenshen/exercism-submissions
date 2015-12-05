package bob

import "strings"

// TestVersion defines which exercism test set to run on this implementation
const TestVersion = 1

// Hey determines the reaction Bob has to a given greeting.
func Hey(speech string) string {
	if (speech == strings.ToUpper(speech)) && (speech != strings.ToLower(speech)) {
		// Yelling
		return "Whoa, chill out!"
	}
	return "Whatever."
}
