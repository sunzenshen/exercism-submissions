package house

// Embed embeds a noun phrase as the object of relative clause with a
// transitive verb.
//
// Argument relPhrase is a phrase with a relative clause, minus the object
// of the clause.  That is, relPhrase consists of a subject, a relative
// pronoun, a transitive verb, possibly a preposition, but then no object.
//
func Embed(relPhrase, nounPhrase string) string {
	return relPhrase + " " + nounPhrase
}

// Verse generates a verse of a song with relative clauses that have
// a recursive structure, using Embed as a subroutine and using programmatic
// recursion that reflects the grammatical recursion.
func Verse(subject string, relPhrases []string, nounPhrase string) string {
	if len(relPhrases) > 0 {
		return Embed(subject, Verse(relPhrases[0], relPhrases[1:], nounPhrase))
	}
	return Embed(subject, nounPhrase)
}

// Song generates the full text of "The House That Jack Built",
// using Verse as a subroutine.
func Song() string {
	relPhrases := []string{
		"the horse and the hound and the horn\nthat belonged to",
		"the farmer sowing his corn\nthat kept",
		"the rooster that crowed in the morn\nthat woke",
		"the priest all shaven and shorn\nthat married",
		"the man all tattered and torn\nthat kissed",
		"the maiden all forlorn\nthat milked",
		"the cow with the crumpled horn\nthat tossed",
		"the dog\nthat worried",
		"the cat\nthat killed",
		"the rat\nthat ate",
		"the malt\nthat lay in",
	}
	verses := "This is the house that Jack built."
	for i := len(relPhrases) - 1; i >= 0; i-- {
		verses += "\n\n" +
			Verse("This is", relPhrases[i:], "the house that Jack built.")
	}
	return verses
}
