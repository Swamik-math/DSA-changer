#include<iostream>

using namespace std;

int main(){

    
}

/*
Time Complexity and Big O Notation
Time Complexity is a measure of the amount of time 
taken by an algorithm to run as a function of the length of the input. 
Since the actual time depends on the hardware, programming language, etc.,
 we instead count the number of elementary operations (like comparisons, assignments, or arithmetic operations).

Big O Notation is the mathematical notation used to describe the upper bound (the worst-case scenario) 
of an algorithm's running time. It focuses only on the dominant term and ignores constants, 
as we're interested in the rate of growth.
*/

/*

The Trade-off
The choice between an Array and a Linked List depends 
entirely on which operations your application performs most frequently:

Choose an Array if you need fast, random access 
to elements (e.g., frequently reading the 1st, 5th, or 100th element).

Choose a Linked List if you need frequent additions or removals 
of elements in the middle of the collection (e.g., implementing a queue or a stack).

*/