package diffsquares

// SquareOfSums squares the sums the numbers 0...n
func SquareOfSums(n int) int {
	return (n*n*n*n + 2*n*n*n + n*n) / 4
}

// SumOfSquares sums the squares of numbers 0...n
func SumOfSquares(n int) int {
	return n * (n + 1) * (2*n + 1) / 6
}

// Difference subtracts SumOfSquares from SquareOfSums
func Difference(n int) int {
	return SquareOfSums(n) - SumOfSquares(n)
}
