package main

import (
	"fmt"
)

func main() {
	var rows int

	fmt.Print("Enter the number of rows: ")
	fmt.Scan(&rows)

	for i := 1; i <= rows; i++ {

		for space := 1; space <= rows-i; space++ {
			fmt.Print(" ")
		}

		for j := 1; j <= (2*i - 1); j++ {
			if i == rows || j == 1 || j == (2*i - 1) {
				fmt.Print("*")
			} else {
				fmt.Print(" ")
			}
		}

		fmt.Println()
	}
}
