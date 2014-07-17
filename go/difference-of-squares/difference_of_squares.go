package diffsquares

// SquareOfSums squares the sums the numbers 0...n
func SquareOfSums(n int) int {
	sums := 0
	for i := n; i > 0; i-- {
		sums += i
	}
	return sums * sums
}

// SumOfSquares sums the squares of numbers 0...n
func SumOfSquares(n int) int {
	sums := 0
	for i := n; i > 0; i-- {
		sums += i * i
	}
	return sums
}

// Difference subtracts SumOfSquares from SquareOfSums
func Difference(n int) int {
	return SquareOfSums(n) - SumOfSquares(n)
}
