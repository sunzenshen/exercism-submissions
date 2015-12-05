package strand

import "strings"

// TestVersion indicates which exercism test suite to use
const TestVersion = 1

// ToRna coverts an input DNA strand to its RNA complement.
func ToRna(dna string) string {
	rnaTranscription := func(nucleotide rune) rune {
		switch nucleotide {
		case 'G':
			return 'C'
		case 'C':
			return 'G'
		case 'T':
			return 'A'
		case 'A':
			return 'U'
		}
		panic("Invalid DNA sequence provided... Input: " + dna)
	}
	return strings.Map(rnaTranscription, dna)
}
