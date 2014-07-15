package raindrops

import "fmt"

// Convert a number into raindrop speak if applicable
func Convert(inputNum int) string {
	raindropSpeak := ""
	isTranslatable := false
	if inputNum%3 == 0 {
		raindropSpeak += "Pling"
		isTranslatable = true
	}
	if inputNum%5 == 0 {
		raindropSpeak += "Plang"
		isTranslatable = true
	}
	if inputNum%7 == 0 {
		raindropSpeak += "Plong"
		isTranslatable = true
	}
	if !isTranslatable {
		raindropSpeak = fmt.Sprintf("%d", inputNum)
	}
	return raindropSpeak
}
