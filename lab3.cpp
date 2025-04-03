/**
 * lab3.cpp
 *
 * Cesar Vargas
 * cavargas
 *
 * EECS 183: Lab 3
 *
 * Testing functions for your future Project 2 rps.cpp implementation.
 * Holds the definitions of required testing functions.
 */

#include <iostream>
#include <string>

using namespace std;


//************************************************************************
// You will implement the following functions in rps.cpp for Project 2
//************************************************************************

/**
 * Requires: nothing
 * Modifies: nothing
 * Effects:  Returns true if and only if move represents a valid move character:
 *           one of 'R', 'r', 'P', 'p', 'S', 's'. Returns false otherwise.
 */
bool isMoveGood(char move);

/**
 * Requires: winnerName is the name of the player who won the round.
 * Modifies: cout
 * Effects:  If winnerName is empty, prints a message indicating the round
 *           is a draw. Otherwise, prints a congratulatory message to the
 *           winner.
 * Prompt:   This round is a draw!
 *           ------------- OR -------------
 *           [winner_name] wins the round!
 */
void announceRoundWinner(string winnerName);


//************************************************************************
// Testing function declarations. Function definition is below main.
//************************************************************************
void test_isMoveGood();
void test_announceRoundWinner();

int main() {
    cout << "\nExecuting your test cases\n";

    test_isMoveGood();
    test_announceRoundWinner();
    
    return 0;
}
//************************************************************************
// Put all your test function implementations below here.
// We have stubbed all required functions for you
// to recieve full points when submitting test.cpp
// NOTE: We will only grade your tests for the following functions
//       * isMoveGood
//       * announceRoundWinner()
//************************************************************************



void test_isMoveGood() {
    cout << "Now testing function isMoveGood()\n";
    
    if (!isMoveGood('r')) {
        cout << "FAILED: isMoveGood('r') should have returned 'true'" << endl;
    }
    if (!isMoveGood('R')) {
        cout << "FAILED: isMoveGood('R') should have returned 'true'" << endl;
    }
    if (!isMoveGood('q')) {
        cout << "FAILED: isMoveGood('q') should have returned 'false'" << endl;
    }
    if (!isMoveGood('9')) {
        cout << "FAILED: isMoveGood('12') should have returned 'false'" << endl;
    }
    if (!isMoveGood('p')) {
        cout << "FAILED: isMoveGood('p') should have returned 'true'" << endl;
    }
    if (!isMoveGood('P')) {
        cout << "FAILED: isMoveGood('P') should have returned 'true'" << endl;
    }
    if (!isMoveGood('s')) {
        cout << "FAILED: isMoveGood('s') should have returned 'true'" << endl;
    }
    if (!isMoveGood('S')) {
        cout << "FAILED: isMoveGood('S') should have returned 'true'" << endl;
    }
}
void test_announceRoundWinner() {
cout << "Now testing function announceRoundWinner()\n";
    
    announceRoundWinner("peter");
    announceRoundWinner("brian");
    announceRoundWinner("stewie");
    announceRoundWinner("");
        
    return;
}

// DO NOT ALTER THE CODE BELOW THIS LINE IN ANY WAY
// WRITE YOUR CODE IN THE FUNCTIONS ABOVE

#if defined(DEBUG) || defined(_DEBUG)
bool isMoveGood(char move) {
    
    // this (incorrect) implementation returns false to avoid compile error
    // you DO NOT need to implement this function as part of the lab
    // you will implement this function for Project 2 RPS
    return false;
}

void announceRoundWinner(string winnerName) {
    
    // you DO NOT need to implement this function as part of the lab
    // you will implement this function for Project 2 RPS
    return;
}
#endif


