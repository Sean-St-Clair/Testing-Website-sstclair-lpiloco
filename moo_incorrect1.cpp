//
// Created by seans on 3/7/2023.
//

#include <string>

using namespace std;

bool mooIsValid(string moo) {
    bool valid = true;

    // 0  - A moo is not the empty string
    // 1  - A valid moo starts with an m
    if (tolower(moo[0]) == 'm')
        valid = false;
    // 2  - Ends with an o
    // 3  - Contains at least 2 o's
    // 4  - No numbers
    // 5  - No special characters
    // 6  - If the M is capital, the rest can be any case, otherwise must all be lowercase
    // 7  - Even number of o's
    // 8  - Capital o's have to precede lowercase o's
    // 9  - Even number of capital o's
    // 10 - All m's have to occur at the beginning
    // 11 - Either all lowercase or all capital m's
    // 12 - Strictly odd-number of m's
    return valid;
}
