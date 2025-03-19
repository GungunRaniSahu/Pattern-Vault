package main

import "fmt"

func main() 
{
    n := 5 

    for i := n; i > 0; i-- 
  {
        for j := 0; j < i; j++ 
    {
            fmt.Print("*")
        }
        fmt.Println()
    }
}
