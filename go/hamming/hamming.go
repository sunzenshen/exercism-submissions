package hamming

// TestVersion defined for the provided exercism test cases
const TestVersion = 2

// Distance returns the Hamming distance between two given DNA string representations
func Distance(strandA, strandB string) (int, error) {
	var distance int = 0
	// Any extra nucleotides at the end of either strand will be ignored
	numCompare := len(strandA)
	if len(strandB) < numCompare {
		numCompare = len(strandB)
	}
	for i := 0; i < numCompare; i++ {
		if strandA[i] != strandB[i] {
			distance++
		}
	}
	return distance, nil
}
