using System;

public class Bob
{
	public static string Hey(string wordsSpoken)
	{
		if (IsSilence (wordsSpoken)) return "Fine. Be that way!";

		if (IsYelling (wordsSpoken)) return "Whoa, chill out!";

		if (IsQuestion (wordsSpoken)) return "Sure.";

		return "Whatever.";
	}

	private static bool IsQuestion(string str)
	{
		return str.Trim().EndsWith ("?");
	}

	private static bool IsSilence(string str)
	{
		return String.IsNullOrWhiteSpace (str);
	}

	private static bool IsYelling(string str)
	{
		var trimmedStr = str.Trim ();
		if (trimmedStr.ToLower () == trimmedStr) {
			// letters are all lower case, doesn't count as yelling
			return false;
		} else if (trimmedStr.ToUpper () == trimmedStr) {
			// ALL UPPER CASE LETTERS INDICATE YELLING
			return true;
		} else {
			// A mixture of UPPER and lower casing not considered yelling
			return false;
		}
	}
}
