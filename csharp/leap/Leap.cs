public class Year
{
	public static bool IsLeap(int year)
	{
		return IsDoublyEven(year);
	}

	private static bool IsDivisible(int numerator, int divisor)
	{
		return numerator % divisor == 0;
	}

	private static bool IsDoublyEven(int numerator)
	{
		return IsDivisible(numerator, 4);
	}
}
