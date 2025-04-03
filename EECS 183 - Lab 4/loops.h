#ifndef loops_h
#define loops_h

/**
 * loops.h
 *
 * EECS 183
 * Lab 4: loops exercises
 *
 * Function definitions for the lab
 * You must not edit this file, and you will *not* submit this file
 */

#include <string>
using namespace std;


//////////////////////////////////////////////////////////////////////
// STUDENT-IMPLEMENTED UTILITY FUNCTIONS                            //
// -------------------------------------                            //
// You will need to implement these.                                //
//////////////////////////////////////////////////////////////////////


// NOTE for every function
// The last line should end with an 'endl'
// There should be no blank lines printed at the beginning
// nor at the end

/**
 * Requires: rows must be > 0,
 *           cols must be > 0
 * Modifies: cout
 * Effects:  prints a rectangle of *'s
 *           prints an endl at the end of each row
 *
 * Example:  printRectangle(3,2);
 *           cout << endl;
 *           printRectangle(1,3);
 *           cout << endl;
 * Note:  no spaces at the end of lines
 * In the example below '|' indicates the left-hand edge
 * The blank lines below are printed by the cout << endl;
 * statements above, NOT by printRectangle()
 *              |**
 *              |**
 *              |**
 *              |
 *              |***
 *              |
 */
void printRectangle(int rows, int cols);
 
 
 
/**
 * Requires: n must be > 0
 * Modifies: cout
 * Effects:  prints a right triangle
 *           prints an endl at the end of each row
 *
 * Example:  printRight(3);
 * Note: no spaces at the end of lines
 * In the example below '|' indicates the left-hand edge
 *             |*
 *             |**
 *             |***
 */
void printRight(int n);
 


/**
 * Requires: n must be > 0
 * Modifies: cout
 * Effects:  prints a right justified triangle
 *           prints an endl at the end of each row
 *
 * Example:  printRightJustified(3);
 * Note: no spaces at the end of lines
 * In the example below '|' indicates the left-hand edge
 *             |  *
 *             | **
 *             |***
 */
void printRightJustified(int n);


/**
 * Requires: n must be > 0
 * Modifies: cout
 * Effects:  prints an isosceles triangle (pointing up)
 *           where parameter n is the height
 *           prints an endl at the end of each row
 *
 * Example: printIsosceles(3);
 * Note: no spaces at the end of lines    
 * In the example below '|' indicates the left-hand edge   
 *             |  *
 *             | ***
 *             |*****
 **/
void printIsosceles(int n);

#endif
