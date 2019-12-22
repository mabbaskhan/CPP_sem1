/**
 * This covers lecture 4, 5, 6 and 7 of programming semester 1.
 */

/* 
 * 1. Loop: Repeating a statement or group of statments 
 * for a fixed number of times or until a condition is met.
 */

// Student Registration form, using for loop.
// for loop: Repeating a statement or group of statments for a fixed number of times.
// It has three parts: 
//  1. define and initialize a variable (counter).
//  2. condition: to repeate the block of code (loop) until the condition is met.
//  3. increment the counter by one.


#include<iostream>
using namespace std;

int main() {
    for (int count = 0; count < 10 ; count++) {
        cout << count;
        cout << endl;
    }
}



