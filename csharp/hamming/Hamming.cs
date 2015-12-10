using System;

public class Hamming
{
	public static int Compute (string strandA, string strandB)
	{
		int distance = 0;
		if (strandA.Length != strandB.Length) {
			throw new ArgumentException ("Input DNA strands are not of the same length");
		}

		for (int i = strandA.Length - 1; i >= 0; --i) {
			if (strandA [i] != strandB [i]) {
				++distance;
			}
				
		}

		return distance;
	}
}
