package main

import (
	"fmt"
)

func main() {
	var rows int

	fmt.Print("Enter the number of rows: ")
	fmt.Scan(&rows)

	for i := 1; i <= rows; i++ {
		letter := 'A'
		for j := 1; j <= i; j++ {
			fmt.Printf("%c ", letter)
			letter++
		}
		fmt.Println()
	}
}
