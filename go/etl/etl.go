package etl

import "strings"

// Transform takes the legacy score format and returns the new score format.
func Transform(oldScores map[int][]string) map[string]int {
	newScores := make(map[string]int)
	for score, letters := range oldScores {
		for _, letter := range letters {
			lowCasedLetter := strings.ToLower(letter)
			alreadyEnteredScore, exists := newScores[lowCasedLetter]
			if exists && (alreadyEnteredScore != score) {
				panic("Encountered a contradicting score entry for letter: " + letter)
			}
			newScores[lowCasedLetter] = score
		}
	}
	return newScores
}
