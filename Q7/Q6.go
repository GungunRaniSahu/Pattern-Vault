package main

import (
	"fmt"
)

func main() {
	var rows int
	fmt.Print("Enter the number of rows: ")
	fmt.Scan(&rows)

	for i := 1; i <= rows; i++ {
	
		for j := i; j < rows; j++ {
			fmt.Print(" ")
		}

		for k := 1; k <= i; k++ {
			fmt.Printf("%d ", k)
		}
		fmt.Println()
	}
}
