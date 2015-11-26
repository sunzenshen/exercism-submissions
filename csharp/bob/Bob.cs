public class Bob
{
	public static string Hey(string greeting)
	{
		if (greeting.EndsWith ("!")) {
			return "Whoa, chill out!";
		} else if (greeting.EndsWith ("?")) {
			return "Sure.";
		}
		return "Whatever.";
	}
}
