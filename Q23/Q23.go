package main

import (
	"fmt"
)

func printBinaryCheckerboard(n int) {
	for i := 0; i < n; i++ {
		for j := 0; j < n; j++ {
			fmt.Printf("%d ", (i+j)%2)
		}
		fmt.Println()
	}
}

func main() {
	var size int
	fmt.Print("Enter the size of the checkerboard: ")
	fmt.Scan(&size)

	printBinaryCheckerboard(size)
}
