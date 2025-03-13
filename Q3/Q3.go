package main

import "fmt"

func printDiamond(n int) {
    for i := 1; i <= n; i += 2 {
        for j := 0; j < (n-i)/2; j++ {
            fmt.Print(" ")
        }
        for j := 0; j < i; j++ {
            fmt.Print("*")
        }
        fmt.Println()
    }

    for i := n - 2; i >= 1; i -= 2 {
        for j := 0; j < (n-i)/2; j++ {
            fmt.Print(" ")
        }
        for j := 0; j < i; j++ {
            fmt.Print("*")
        }
        fmt.Println()
    }
}

func main() {
    var n int
    fmt.Print("Enter an odd number for the diamond pattern: ")
    fmt.Scan(&n)

    if n%2 == 0 {
        fmt.Println("Please enter an odd number.")
        return
    }

    printDiamond(n)
}
