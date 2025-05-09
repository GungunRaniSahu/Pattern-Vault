package main

import "fmt"

func main() {
	for i := 0; i < 5; i++ {
		for j := 0; j < 5; j++ {
			if j == 0 || j == 4 || i == 0 || i == 4 {
				fmt.Print(i + 1)
			} else {
				fmt.Print(0)
			}
		}
		fmt.Println()
	}
}
