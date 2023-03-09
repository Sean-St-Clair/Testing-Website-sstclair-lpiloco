// mellon
#include <iostream>

using namespace std;

// Takes a string as input, and returns true if it is a valid moo.
/*
 * Requires: A string containing the "moo" to be tested
 * Modifies: Nothing
 * Effects: Returns whether or not the given string is a valid moo,
 * based on the following conditions:
 *
 * 0  - A moo is not the empty string
 * 1  - Starts with an m
 * 2  - Ends with an o
 * 3  - Contains at least 2 o's
 * 4  - No numbers
 * 5  - No special characters
 * 6  - If the M is capital, the rest can be any case, otherwise must all be lowercase
 * 7  - Even number of o's
 * 8  - Capital o's have to precede lowercase o's
 * 9  - Even number of capital o's
 * 10 - All m's have to occur at the beginning
 * 11 - Either all lowercase or all capital m's
 * 12 - Strictly odd-number of m's
 */
bool mooIsValid(string moo);

bool test_moo();

int main() {
    if (test_moo()) {
        cout << "Passed all test cases!" << endl;
    }
    return 0;
}

bool test_moo() {
    bool passed = true;

    if (!mooIsValid("oo")) {
        cout << "Failed Moo test case" << endl;
        passed = false;
    }

    return passed;
}