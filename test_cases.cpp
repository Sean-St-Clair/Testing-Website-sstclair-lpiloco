// mellon
#include <iostream>

using namespace std;

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
        cout << "PASSED all test cases!" << endl;
    }
    return 0;
}

bool test_moo() {
    bool passed = true;

    // 0 - A moo is not the empty string
    // 1 - Starts with an m
    if (mooIsValid("noo")) {
        cout << "FAILED 'Starts with an m' test case" << endl;
        passed = false;
    }

    // 2 - Ends with an o
    // 3 - Contains at least 2 o's
    if (mooIsValid("mo")) {
        cout << "FAILED 'Contains at least 2 o's' test case" << endl;
        passed = false;
    }

    // 4 - No numbers
    // 5 - No special characters
    if (mooIsValid("$moo")) {
        cout << "FAILED 'No special characters' test case" << endl;
        passed = false;
    }

    // 6 - If the M is capital, the rest can be any case, otherwise must all be lowercase
    // 7 - Even number of o's
    if (mooIsValid("mooo")) {
        cout << "FAILED 'Even number of o's' test case" << endl;
        passed = false;
    }

    // 8 - Capital o's have to precede lowercase o's
    // 9 - Even number of capital o's
    if (mooIsValid("MOoo")) {
        cout << "FAILED 'Even number of o's' test case" << endl;
        passed = false;
    }

    // 10 - All m's have to occur at the beginning
    // 11 - Either all lowercase or all capital m's
    if (mooIsValid("Mmoo")) {
        cout << "FAILED 'Either all lowercase or all capital m's' test case 1" << endl;
        passed = false;
    }

    // 12 - Strictly odd-number of m's

    return passed;
}