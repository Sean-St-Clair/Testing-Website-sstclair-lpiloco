// mellon
#include <iostream>

using namespace std;

/*
 * TODO: Moo
 */
string mooValidation(string moo);

bool test_moo();

int main() {
    if (test_moo()) {
        cout << "Passed all test cases!" << endl;
    }
    return 0;
}

bool test_moo() {
    bool passed = true;

    if (mooValidation("Moo") != "Valid moo.") {
        cout << "Failed Moo test case" << endl;
        passed = false;
    }

    return passed;
}