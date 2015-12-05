package bob

import "strings"

// TestVersion defines which exercism test set to run on this implementation
const TestVersion = 1

// Hey determines the reaction Bob has to a given greeting.
func Hey(speech string) string {
	// Trim unused characters from the greeting
	speech = strings.Trim(speech, " ")
	if (speech == strings.ToUpper(speech)) && (speech != strings.ToLower(speech)) {
		// Yelling
		return "Whoa, chill out!"
	} else if strings.HasSuffix(speech, "?") {
		// Question
		return "Sure."
	} else if len(speech) == 0 {
		// Silence
		return "Fine. Be that way!"
	}
	return "Whatever."
}
