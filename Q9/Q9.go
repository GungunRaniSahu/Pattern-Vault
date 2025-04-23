package main

import (
	"fmt"
)

func main() {
	var n int
	fmt.Print("Enter the number of rows for the pyramid: ")
	fmt.Scan(&n)

	for i := 0; i < n; i++ {

		for space := 0; space < n-i-1; space++ {
			fmt.Print(" ")
		}


		for j := 0; j <= i; j++ {
			fmt.Printf("%c ", 'A'+j)
		}

		fmt.Println()
	}
}
