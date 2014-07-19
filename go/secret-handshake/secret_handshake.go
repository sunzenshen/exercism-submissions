package secret

// Handshake takes a number and extracts the secret handshake message
func Handshake(code int) []string {
	if code <= 0 || code > 31 {
		// Unsupported inputs
		return nil
	}
	// For determining order of secret handshake steps
	var start int
	var end int
	var increment int
	if code&16 > 0 {
		// 10000 = Reversed order
		start = 3
		end = -1
		increment = -1
	} else {
		// Normal order
		start = 0
		end = 4
		increment = 1
	}
	// Now append handshake steps in previously determined order
	var secretHandshake []string
	for i := start; i != end; i += increment {
		var step string
		switch i {
		case 0:
			step = "wink"
		case 1:
			step = "double blink"
		case 2:
			step = "close your eyes"
		case 3:
			step = "jump"
		}
		// Test ith bit with respect to bit positions ...3210
		testBitmap := getTestBitmap(i)
		if code&testBitmap > 0 {
			secretHandshake = append(secretHandshake, step)
		}
	}
	return secretHandshake
}

func getTestBitmap(exponent int) int {
	// Avoid importing math.Pow for 2^i
	testBitmap := 1
	for i := 0; i < exponent; i++ {
		testBitmap *= 2
	}
	return testBitmap
}
