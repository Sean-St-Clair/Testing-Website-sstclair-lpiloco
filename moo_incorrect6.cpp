//
// Created by lpiloco and sstclair on 3/7/2023.
//

#include <string>

using namespace std;

bool mooIsValid(string moo) {
    bool valid = true;
    // Lowercase version of moo useful for testing quantities of m's or o's
    string lowerMoo = "";
    for (char c: moo) {
        lowerMoo += tolower(c);
    }

    // The number of Os and Ms in moo
    int numOs = 0;
    int numMs = 0;
    int numOsCapital = 0;
    int numMsCapital = 0;
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

    // 1  - A moo is not the empty string
    if (moo == "") {
        valid = false;
    }

    // 2  - A valid moo starts with an m
    if (moo[0] != 'm') {
        valid = false;
    }

    // 3  - Ends with an o
    if (moo[moo.size() - 1] != 'o') {
        valid = false;
    }

    // 4  - Contains at least 2 o's
    if (numOs < 2) {
        valid = false;
    }

    // 5  - No numbers
    for (char c: moo) {
        if (isdigit(c)) {
            valid = false;
        }
    }

    // 6  - No special characters
    for (char c: moo) {
        if (isalpha(c)) { // FIXME:         if (!isalpha(c)) {
            valid = false;
        }
    }

    // 7  - If the M is capital, the rest can be any case, otherwise must all be lowercase
    if (numMsCapital == 0) {
        if (numOsCapital > 0) {
            valid = false;
        }
    }

    // 8  - Even number of o's
    if (numOs % 2 != 0) {
        valid = false;
    }

    // 9  - Capital o's have to precede lowercase o's
    int lowerOIndex = 0;
    if (moo.find('o') != string::npos) {
        lowerOIndex = moo.find('o');
        if (moo.find('O', lowerOIndex) != string::npos) {
            valid = false;
        }
    }

    // 10  - Even number of capital o's
    if (numOsCapital % 2 != 0) {
        valid = false;
    }

    // 11 - All m's have to occur at the beginning
    if (lowerMoo.find('o') != string::npos) {
        lowerOIndex = lowerMoo.find('o');
        if (lowerMoo.find('m', lowerOIndex) != string::npos) {
            valid = false;
        }
    }

    // 12 - Either all lowercase or all capital m's
    if (numMsCapital != numMs) {
        if (numMsCapital > 0) {
            valid = false;
        }
    }

    // 13 - Strictly odd-number of m's
    if (numMs % 2 == 0) {
        valid = false;
    }

    // If the function hasn't returned yet, it must be a valid moo
    return valid;
}
