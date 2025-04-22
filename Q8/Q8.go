package main

import (
	"fmt"
)

func main() {
	var rows int
	fmt.Print("Enter the number of rows: ")
	fmt.Scan(&rows)

	for i := rows; i >= 1; i-- {
	
		for j := rows; j > i; j-- {
			fmt.Print(" ")
		}

		for k := 1; k <= (2*i - 1); k++ {
			fmt.Print("*")
		}
		fmt.Println()
	}
}
