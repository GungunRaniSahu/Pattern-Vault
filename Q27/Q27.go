package main

import (
	"fmt"
	"strings"
)

func printAlternatingPyramid(n int) {
	for i := 1; i <= n; i++ {
		fmt.Print(strings.Repeat(" ", n-i))

		var symbol string
		if i%2 == 1 {
			symbol = "*"
		} else {
			symbol = "#"
		}

		for j := 1; j <= i; j++ {
			fmt.Print(symbol + " ")
		}
		fmt.Println()
	}
}

func main() {
	var n int
	fmt.Print("Enter the number of rows: ")
	fmt.Scan(&n)
	printAlternatingPyramid(n)
}
