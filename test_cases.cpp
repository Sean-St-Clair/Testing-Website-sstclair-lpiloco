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
        cout << "Passed all test cases!" << endl;
    }
    return 0;
}

bool test_moo() {
    bool passed = true;

    // 1 - A moo is not the empty string
    // 2 - Starts with an m
    // 3 - Ends with an o
    // 4 - Contains at least 2 o's
    // 5 - No numbers
    // 6 - No special characters
    // 7 - If the M is capital, the rest can be any case, otherwise must all be lowercase
    // 8 - Even number of o's
    // 9 - Capital o's have to precede lowercase o's
    // 10 - Even number of capital o's
    // 11 - All m's have to occur at the beginning
    // 12 - Either all lowercase or all capital m's
    // 13 - Strictly odd-number of m's

    return passed;
}