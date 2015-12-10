using System;

public class Hamming
{
	public static int Compute (string strandA, string strandB)
	{
		if (strandA.Length != strandB.Length) {
			throw new ArgumentException ("Input DNA strands are not of the same length");
		}

		return 0;
	}
}
