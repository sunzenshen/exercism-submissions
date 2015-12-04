package wordcount

import "strings"

// TestVersion specifies which exercism test set this exercise is submitted for
const TestVersion = 1

// Frequency records the frequency of words seen in a given string
type Frequency map[string]int

// WordCount takes a string and returns a dictionary tracking the counts of individual words
func WordCount(phrase string) Frequency {
	var counts = make(Frequency)
	words := strings.Fields(phrase)
	for _, word := range words {
		counts[word] = counts[word] + 1
	}
	return counts
}
