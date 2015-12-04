package anagram

import "sort"
import "strings"

// Detect finds the anagrams for a given word, from an input list of candidate strings
func Detect(target string, candidates []string) []string {
	var matches []string
	for _, candidate := range candidates {
		if areAnagrams(target, candidate) {
			matches = append(matches, strings.ToLower(candidate))
		}
	}
	return matches
}

func areAnagrams(a, b string) bool {
	a = strings.ToLower(a)
	b = strings.ToLower(b)
	if sortedByRune(a) != sortedByRune(b) {
		// Letter counts do not match for anagram candidates
		return false
	}
	return true
}

// runeSlice is defined for sorting string alphabetically
type runeSlice []rune

// Len returns the number of runes that make up a given string.
func (s runeSlice) Len() int { return len(s) }

// Less returns whether the first rune is a lower order of the second rune.
func (s runeSlice) Less(i, j int) bool { return s[i] < s[j] }

// Swap takes two slice indices and swaps the containing runes.
func (s runeSlice) Swap(i, j int) { s[i], s[j] = s[j], s[i] }

func sortedByRune(s string) string {
	runes := []rune(s)
	sort.Sort(runeSlice(runes))
	return string(runes)
}
