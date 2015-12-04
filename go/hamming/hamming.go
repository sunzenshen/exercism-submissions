package hamming

import "errors"

// TestVersion defined for the provided exercism test cases
const TestVersion = 2

// Distance returns the Hamming distance between two given DNA string representations
func Distance(strandA, strandB string) (int, error) {
	var distance int
	// Return an error if strings are not of the same length
	if len(strandA) != len(strandB) {
		return -1, errors.New("distance: input strings are not of the same length")
	}
	numCompare := len(strandA)
	for i := 0; i < numCompare; i++ {
		if strandA[i] != strandB[i] {
			distance++
		}
	}
	return distance, nil
}
