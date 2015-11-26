public class Bob
{
	public static string Hey(string greeting)
	{
		// Trim whitespace
		greeting = greeting.Trim ();
		// Determine Bob's response
		if (greeting.EndsWith ("!")) {
			return "Whoa, chill out!";
		} else if (greeting.EndsWith ("?")) {
			return "Sure.";
		}
		return "Whatever.";
	}
}
