//
// Created by seans on 3/7/2023.
//

#include <string>

using namespace std;

bool mooIsValid(string moo) {
    bool valid = true;
    // Lowercase version of moo useful for testing quantities of m's or o's
    string lowerMoo;
    for (char c: moo) {
        lowerMoo += tolower(c);
    }

    // The number of Os and Ms in moo
    int numOs, numMs, numOsCapital, numMsCapital;
    for (char c: moo) {
        if (c == 'o') {
            numOs++;
        } else if (c == 'm') {
            numMs++;
        } else if (c == 'O') {
            numOs++;
            numOsCapital++;
        } else if (c == 'M') {
            numMs++;
            numMsCapital++;
        }
    }

    // 0  - A moo is not the empty string
    if (moo == "") {
        valid = false;
    }

    // 1  - A valid moo starts with an m
    if (lowerMoo[0] != 'm')
        valid = false;

    // 2  - Ends with an o
    if (tolower(*moo.end()) != 'o') {
        valid = false;
    }

    // 3  - Contains at least 2 o's
    if (numOs < 2) {
        valid = false;
    }

    // 4  - No numbers
    for (char c: moo) {
        if (isdigit(c)) {
            valid = false;
            break;
        }
    }

    // 5  - No special characters
    for (char c: moo) {
        if (!isalpha(c)) {
            valid = false;
            break;
        }
    }

    // 6  - If the M is capital, the rest can be any case, otherwise must all be lowercase
    if (moo != lowerMoo) {
        valid = false;
    }

    // 7  - Even number of o's
    if (numOs % 2 != 0) {
        valid = false;
    }

    // 8  - Capital o's have to precede lowercase o's
    int lowerOIndex;
    if (moo.find('o') != string::npos) {
        lowerOIndex = moo.find('o');
        if (moo.find('O', lowerOIndex) != string::npos) {
            valid = false;
        }
    }

    // 9  - Even number of capital o's
    if (numOsCapital % 2 != 0) {
        valid = false;
    }

    // 10 - All m's have to occur at the beginning
    if (lowerMoo.find('o') != string::npos) {
        lowerOIndex = lowerMoo.find('o');
        if (lowerMoo.find('m', lowerOIndex) != string::npos) {
            valid = false;
        }
    }

    // 11 - Either all lowercase or all capital m's
    if (numMsCapital != numMs) {
        if (numMsCapital != 0) {
            valid = false;
        }
    }

    // 12 - Strictly odd-number of m's

    return valid;
}
