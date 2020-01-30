# Advanced Programming - Milestone 2

By Guy Stepanenko and Amit Tulman

In this modular project, we created a server side code that can solve different problems.
The server can work in two modes - linear and parallel.
This code includes two specific implementations: reversing strings, and solving a problem from graph theory.
Given a graph with a cost for each edge, we find the cheapest way from one point to another.
We used a matrix representation for the graph.

The modulartity of this code allows us to replace the parts that are responsible for problem definition and problem solution (Solver).

In order to use this code, you will need to compile it with g++ c++14 compilation, and run with port number as an argument.
After running the code, connect to local host with the port number (can use telnet, or any other client code.
Later, send a text file that contains a matrix (rectangular or square): 
Row by row, each value (only positive, or "-1" as a wall) followed by ",", and "\n" in the end of the line.
After the matrix, add the start and goal points, in the same way as the matrix lines.
Add the word "end".

You will receive an answer - the cheapest path from start point to goal point, and the cost of the whole path.
Solving such problems can use much computation resources, so we implemented a cache module that saves the solution of a given problem on the hard drive, and can be withdrawn if same problem is received.
In order to find the best algorithm to solve the problem of finding the cheapest path, we tried several algorithms:
1. Best first search
2. Breadth first search
3. Depth first search
4. A-Star

We have conducted an experiment, in order to find out which one was the most suitable for our problem:
Ran 10 different sized matrices on each algorithm, and compared the results.
The best one was Best-FS, and it is now set as the default solver.

Example for a correct matrix that can be sent:
14,10,16,4,17,2,11,15,5,-1
1,10,6,10,2,7,4,15,1,2
2,13,3,8,15,20,11,17,12,19
5,7,14,6,18,13,20,2,8,5
4,15,-1,20,15,7,11,12,19,2
4,4,18,14,16,1,-1,1,18,15
10,5,1,10,17,19,18,0,15,9
15,10,20,15,0,2,20,3,0,13
13,2,19,2,-1,8,-1,7,19,15
-1,12,5,1,5,9,18,11,-1,5
0,0
9,9
end
