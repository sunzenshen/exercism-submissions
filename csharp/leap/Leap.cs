public class Year
{
	public static bool IsLeap(int year)
	{
		return IsDoublyEven(year) && !IsCentury(year);
	}

	private static bool IsDivisible(int numerator, int divisor)
	{
		return numerator % divisor == 0;
	}

	private static bool IsDoublyEven(int numerator)
	{
		return IsDivisible(numerator, 4);
	}

	private static bool IsCentury(int year)
	{
		return IsDivisible(year, 100);
	}
}
