using System.Collections.Generic;

public class ETL
{
	// Translate a set of Scrabble scores indexed by point values into a set indexed by letters
	public static Dictionary<string, int> Transform (Dictionary<int, IList<string>> oldScores)
	{
		var newScores = new Dictionary<string, int>();
		// Each old entry has point-value keys with letter values
		foreach (var oldEntry in oldScores) {
			// For each letter with a given score, add it to the transformed output
			foreach(var letter in oldEntry.Value) {
				newScores.Add (letter.ToLower(), oldEntry.Key);
			}
		}
		return newScores;
	}
}
