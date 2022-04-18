package main

import (
    "fmt"
    "math"
)

// people who want to travel
const n int = 4

// max weight allowed in elevator
const x int = 10.0

func main() {

    weights := [n]int{4, 8, 6, 1}

    var rides int
    sum := 0

    if len(weights) == n {

        // set sum to sum of weights
        for i := 0; i < len(weights); i++ {
            sum = sum + weights[i]
        }

    } else {
        fmt.Println("Error.")
    }

    fmt.Println("total weights: ", sum)

    res := float64(sum) / float64(x)
    quotient := int(res)
    remainder := math.Mod(float64(sum), float64(x))

    // if any leftover people who want to travel
    if remainder != 0 {
        rides = quotient + 1
    } else {
        rides = quotient
    }

    fmt.Println("rides needed: ", rides)


}
