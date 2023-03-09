// mellon
#include <iostream>

using namespace std;

/*
 * Requires: A string containing the "moo" to be tested
 * Modifies: Nothing
 * Effects: Returns whether or not the given string is a valid moo,
 * based on the following conditions:
 *
 * 1  - A moo is not the empty string
 * 2  - Starts with an m
 * 3  - Ends with an o
 * 4  - Contains at least 2 o's
 * 5  - No numbers
 * 6  - No special characters
 * 7  - If the M is capital, the rest can be any case, otherwise must all be lowercase
 * 8  - Even number of o's
 * 9  - Capital o's have to precede lowercase o's
 * 10  - Even number of capital o's
 * 11 - All m's have to occur at the beginning
 * 12 - Either all lowercase or all capital m's
 * 13 - Strictly odd-number of m's
 */
bool mooIsValid(string moo);

bool test_moo();

int main() {
    if (test_moo()) {
        cout << "PASSED all test cases!" << endl;
    }
    return 0;
}

bool test_moo() {
    bool passed = true;

    // 1 - A moo is not the empty string
    // 2 - Starts with an m
    if (mooIsValid("noo")) {
        cout << "FAILED 'Starts with an m' test case" << endl;
        passed = false;
    }

    // 3 - Ends with an o
    // 4 - Contains at least 2 o's
    if (mooIsValid("mo")) {
        cout << "FAILED 'Contains at least 2 o's' test case" << endl;
        passed = false;
    }

    // 5 - No numbers
    // 6 - No special characters
    if (mooIsValid("$moo")) {
        cout << "FAILED 'No special characters' test case" << endl;
        passed = false;
    }

    // 7 - If the M is capital, the rest can be any case, otherwise must all be lowercase
    // 8 - Even number of o's
    if (mooIsValid("mooo")) {
        cout << "FAILED 'Even number of o's' test case" << endl;
        passed = false;
    }

    // 9 - Capital o's have to precede lowercase o's
    // 10 - Even number of capital o's
    if (mooIsValid("MOoo")) {
        cout << "FAILED 'Even number of o's' test case" << endl;
        passed = false;
    }

    // 11 - All m's have to occur at the beginning
    // 12 - Either all lowercase or all capital m's
    if (mooIsValid("Mmoo")) {
        cout << "FAILED 'Either all lowercase or all capital m's' test case 1" << endl;
        passed = false;
    }

    // 13 - Strictly odd-number of m's

    return passed;
}