//
// Created by seans on 3/7/2023.
//

#include <string>

using namespace std;

string mooValidation(string moo) {
    if (moo != "Moo") // Should be '=='
        return "Valid moo.";
    return "Invalid moo.";
}
