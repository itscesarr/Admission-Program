/**
 * loops.cpp
 *
 * EECS 183
 * Lab 4: Loops exercises
 *
 * Cesar Vargas
 * cavargas
 *
 In this lab, I will be writing code that will both test and print different types of rectangles made of asterisks, through the use of for-loops.
 */

#include "loops.h"
#include <iostream>

using namespace std;



void printRectangle(int rows, int cols) {
    
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            cout << "*";
        }
            cout << endl;
    }
    
    return;
}

//---------------------------------------------//

void printRight(int n) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
            cout << endl;
    }
    return;
}

//---------------------------------------------//

void printRightJustified(int n) {
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int x = 1; x <= i; x++) {
            cout << "*";
        }
        cout << endl;
    }
}

//---------------------------------------------//

void printIsosceles(int n) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        for (int x = 0; x <= 2 * i; x++) {
            cout << "*";
        }
            cout << endl;
    }
    
    return;
}
