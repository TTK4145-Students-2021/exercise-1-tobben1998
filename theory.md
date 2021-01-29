Exercise 1 - Theory questions
-----------------------------
 
 ### What is the difference between concurrency and parallelism?
 Concurrency is when two tasks can start, run, and complete in overlapping time periods. Parallelism is when tasks literally run at the same time
 
 ### Why have machines become increasingly multicore in the past decade?
 Since the the upperlevel og clock speed has leveld out. Because of that multicore has been the way to improve computing performance
 
 ### Why do we divide software (programs) into concurrently executing parts (like threads or processes)?
 (Or phrased differently: What problems do concurrency help in solving?)
 concurrency helps in doing more task. It allows the time that would be spent for waiting to be spent for other tasks.
 
 ### Does creating concurrent programs make the programmer's life easier? Harder? Maybe both?
 (Come back to this after you have worked on part 4 of this exercise)
 > I guess it makes it hardered, but you can get better code with it, and get more done, so maybe easier for harder tasks.
 
 ### What is the conceptual difference between threads and processes?
 > A process is an executing program, while a thread is a basic unit which the processcor allocates processor time. 
 
 ### Some languages support "fibers" (sometimes called "green threads") or "coroutines"? What are they?
 > A fiber, is kind o\f a light weight thread, and both use a kind of multitasking, but the difference is that fiber uses cooperative multitasking, while threads use prempttive multitasking. Corutines are aslo very similar to threads, but also use  cooperatively multitasking. The differencie between fibers and corutines, are that cortunies a lanugage level contruct, while fibers are a symstem level construct.
 
 
 ### What is the Go-language's "goroutine"? A C/POSIX "pthread"?
 A goroutine is a lightweight thread managed by the Go runtime. Goroutines, are also functions that runs concurrently with other functions.
 
 ### In Go, what does `func GOMAXPROCS(n int) int` change? 
It changes the maximum number of cpus that can be executions at the same time.



 
 
 
 
