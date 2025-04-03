/**
 * test.cpp
 *
 * EECS 183
 * Lab 4: loops exercises
 *
 * Cesar Vargas
 * cavargas
 *
 * This file contains all test cases to test the print functions implemented in loops.cpp.
 */

#include "loops.h"

#include <iostream>
using namespace std;

void testPrintRectangle();
void testprintRight();
void testprintRightJustified();
void testprintIsosceles();

int main() {
    
    // TODO
    // Once you have completed the testing functions
    // call them such that the tests actually get run
    testPrintRectangle();
    testprintRight();
    testprintRightJustified();
    testprintIsosceles();
    
    return 0;
}

void testPrintRectangle() {
    cout << "Testing printRectangle()" << endl;
    printRectangle(3, 2);
    cout << endl;

    printRectangle(5, 7);
    cout << endl;
    
    printRectangle(1, 1);
    cout << endl;

}

void testprintRight() {
    cout << "Testing printRight()" << endl;
    printRight(3);
    
}

void testprintRightJustified() {
    cout << "Testing printRightJustified()" << endl;
    printRightJustified(3);
    
}

void testprintIsosceles() {
    cout << "Testing printIsosceles()" << endl;
    printIsosceles(3);
    
}

// TODO
// Implement your other test_functions





