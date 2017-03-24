In this assignment, you will be writing a program that reads a list of process start times and durations from stdin. That list will be used four times to run through the following CPU scheduling algorithms:

1- First Come, First Served

2- Shortest Job First

3- Shortest Remaining Time First

4- Round Robin


Your program will show three statistics for each scheduling algorithm. 

1- the average process response time, 

2- the average process wait time, 

3-  and the average process turnaround


The time quantum for the Round Robin scheduler is 100ms. Your program only needs to work with a maximum of 100 processes.


===HINTS?====
	-Don't overcomplicate this assignment. Keep your process start times in one integer array, your burst times in another integer array, and then refer to those processes via other arrays.
	
	-Make four functions, one for each scheduling mechanism. Pass the input data to each function as a parameter. Do not modify your original arrays as you will be reusing the data in those arrays multiple times.
	
	-This program is simply an adder of process run times to a clock. Use the value of the clock to determine if new processes need to be added to your queue.
	
	-Some students have tried to write a program that increments the clock one tick at a time. This is the difficult way to do it and is also incorrect.
	
	
	-The context switch cost is negligible and is not figured into this assignment.
	

Hint Summary:

	Keep it simple.

	Store times in int arrays

	use clock times

	don't use clock tick, that sucks


