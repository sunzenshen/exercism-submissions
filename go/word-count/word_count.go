package wordcount

import "strings"

// TestVersion specifies which exercism test set this exercise is submitted for
const TestVersion = 1

// Frequency records the frequency of words seen in a given string
type Frequency map[string]int

// WordCount takes a string and returns a dictionary tracking the counts of individual words
func WordCount(phrase string) Frequency {
	var counts = make(Frequency)
	// strip punctuation
	phrase = stripNonAlphaNum(phrase)
	// normalize casing
	phrase = strings.ToLower(phrase)
	// segment words by spaces
	words := strings.Fields(phrase)
	for _, word := range words {
		counts[word] = counts[word] + 1
	}
	return counts
}

func stripNonAlphaNum(phrase string) string {
	keepAlphaNum := func(r rune) rune {
		if (r >= 'A' && r <= 'Z') ||
			(r >= 'a' && r <= 'z') ||
			(r >= '0' && r <= '9') ||
			(r == ' ') {
			return r
		}
		return -1
	}
	return strings.Map(keepAlphaNum, phrase)
}
