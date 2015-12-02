public class Bob
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
		} else if (IsYelling (greeting)) {        // yelling
			return "Whoa, chill out!";
		} else if (greeting.EndsWith ("?")) {     // question
			return "Sure.";
		}
		return "Whatever.";
	}

	private static bool IsYelling(string str)
	{
		if (str.ToLower () == str) {
			// letters are all lower case, doesn't count as yelling
			return false;
		} else if (str.ToUpper () == str) {
			// ALL UPPER CASE LETTERS INDICATE YELLING
			return true;
		} else {
			// A mixture of UPPER and lower casing not considered yelling
			return false;
		}
	}
}
