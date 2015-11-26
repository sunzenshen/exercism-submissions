public class Bob
{
	public static string Hey(string greeting)
	{
		// Trim whitespace
		greeting = greeting.Trim ();
		// Determine Bob's response
		if (AreAllAlphaUpper (greeting) && (greeting.EndsWith ("!") || greeting.EndsWith ("?"))) {
			return "Whoa, chill out!";
		} else if (greeting.EndsWith ("?")) {
			return "Sure.";
		}
		return "Whatever.";
	}

	private static bool AreAllAlphaUpper(string str)
	{
		int strlen = str.Length;
		for (int i = 0; i < strlen; ++i) {
			if (char.IsLetter (str [i]) && !char.IsUpper (str [i])) {
				return false; // Not all alphabetical characters are upper case
			}
		}
		return true; // Did not find a lower case alphabetical character
	}
}
