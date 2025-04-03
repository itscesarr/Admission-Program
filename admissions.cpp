/**
 * admissions.cpp
 *
 * Cesar, Deon
 * cavargas
 *
 * EECS 183: Lab 1
 *
 *  We will create a College Admissions Calculator Program.
 */
 
#include <iostream>
using namespace std;

/* TODO: WHEN COMPLETING THE REFLCTION FORM!
 * change the values for these variables
 * NOTE: in order for the program to work the values must all add up to a
 * number <= 1, otherwise you will get values greater than 100
*/
const double GPA_WEIGHT = 0.4;
const double SAT_WEIGHT = 0.3;
const double DEM_INTREST_WEIGHT = 0.1;
const double CURRICULUM_STRENGTH_WEIGHT = 0.2;

int main() {
    
    // Task 2 College Admissions
    // TO-DO: Print "College Admissions Calculator"
    
    cout << "College Admissions Calculator " << endl;
    
    cout << "Please enter your GPA out of 5.0:  " << endl;
    double GPA = 0.4;\
    cin >> GPA;
    
    cout << "Please enter your SAT score out of 1600:  " << endl;
    double SAT = 0.3;\
    cin >> SAT;
    
    cout << "Please enter your demonstrated interest out of 10:  " << endl;
    double DEM_INTEREST = 0.1;\
    cin >> DEM_INTEREST;
    
    cout << "Please enter your high school curriculum strength out of 10:  " << endl;
    double CURRICULUM_STRENGTH = 0.2;\
    cin >> CURRICULUM_STRENGTH;
    
    
    double admission = 0;
    
    admission = GPA_WEIGHT * (GPA * 2)
    + SAT_WEIGHT * (SAT / 160)
    + DEM_INTREST_WEIGHT * DEM_INTEREST
    + CURRICULUM_STRENGTH_WEIGHT * CURRICULUM_STRENGTH;
    
    cout << "Expected chance of admission: " << (int)(admission * 10) << "/100" << endl;
    
    // TO-DO: Ask user to enter data. Store in variables named:
    // GPA, SAT, and DEM_INTEREST
    
    
    
    /* Formula: gpa_weight * (GPA * 2)
     + sat_weight * (SAT / 160)
     + dem_interested_weight * DEM_INTEREST
     + curriculum_strength_weight * CURRICULUM_STRENGTH
     */
    
    // TO-DO: Create a variable score that equals the expected chance
    // of admission. Use the formula given in the comment above.
    
    // TO-DO: Multiply the score by 10
    
    // TO-DO: Announce the score to the user
    
    return 0;
}
