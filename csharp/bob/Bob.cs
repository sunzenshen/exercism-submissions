﻿public class Bob
{
	public static string Hey(string greeting)
	{
		if (greeting == null) {
			throw new System.ArgumentException("Parameter in Bob::Hey() cannot be null", "greeting");;
		}

		// Trim whitespace
		greeting = greeting.Trim ();
		// Determine Bob's response
		if (greeting.Length == 0) {               // silence
			return "Fine. Be that way!";
		} else if (AreAllAlphaUpper (greeting)) { // yelling
			return "Whoa, chill out!";
		} else if (greeting.EndsWith ("?")) {     // question
			return "Sure.";
		}
		return "Whatever.";
	}

	private static bool AreAllAlphaUpper(string str)
	{
		bool isUpperSeen = false;
		int strlen = str.Length;
		for (int i = 0; i < strlen; ++i) {
			if (char.IsLetter (str [i])) {
				bool isCurrentCharUpper = char.IsUpper (str [i]);
				if (!isCurrentCharUpper) {
					return false; // Not all alphabetical characters are upper case
				}
				// Check if we've seen an upper case character before
				if (isCurrentCharUpper) {
					isUpperSeen = true;
				}
			}
		}
		// There are alphabetical characters which are all upper case
		return isUpperSeen;
	}
}
