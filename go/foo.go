// Use `go run foo.go` to run your program

package main

import (
	. "fmt"
	"runtime"
	"time"
)

var i = 0

func incrementing() {

	//Done TODO: increment i 1000000 times
	for j := 0; j <= 1000000; j++ {
		i++
	}
}
func decrementing() {
	for j := 0; j <= 1000000; j++ {
		i--
	}
	//Done TODO: decrement i 1000000 times
}

func main() {
	runtime.GOMAXPROCS(runtime.NumCPU()) // I guess this is a hint to what GOMAXPROCS does...
	// TODO: Spawn both functions as goroutines

	go incrementing()
	go decrementing()

	// We have no way to wait for the completion of a goroutine (without additional syncronization of some sort)
	// We'll come back to using channels in Exercise 2. For now: Sleep.
	time.Sleep(500 * time.Millisecond)
	Println("The magic number is:", i)
}
