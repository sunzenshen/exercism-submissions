using System;
using System.Collections.Generic;

public class Anagram
{
	// Alphabetically sorted version of original phrase for letter set matching
	private string key_;
	// Original phrase for checking self identity of anagram candidate
	private string phrase_;

	// Constructor stores alphabetized key and original phrase
	public Anagram (string phrase) {
		key_ = CreateKey (phrase);
		phrase_ = phrase;
	}

	// Of a set of input words,
	// returns the set that are matching anagrams of original phrase
	public string[] Match (string[] words) {
		var matches = new List<string> ();
		foreach (var word in words) {
			if (IsAnagram(word)) {
				matches.Add(word);
			}
		}
		return matches.ToArray();
	}

	// Checks the candidate phrase against the stored key and original phrase
	private bool IsAnagram (string candidate) {
		var ret = true;
		if (phrase_ == candidate) {
			// A word cannot be an anagram of its identical self
			ret = false;
		}
		if (key_ != CreateKey (candidate)) {
			// Set of letters don't match for anagram
			ret = false;
		}
		return ret;
	}

	// CreateKey returns the alphabetized order of the characters
	// for comparisons between potential anagrams
	private static string CreateKey (string phrase) {
		// Assuming ASCII characters (no extended Unicode)
		var arrayToSort = phrase.ToCharArray ();
		Array.Sort (arrayToSort);
		return new string (arrayToSort);
	}
}
