#include <string>
using namespace std;

string triangle_type(int side1, int side2, int side3) {
    // if the sum of any two sides is <= the third side
    // or if any side is <= 0, then it is not a triangle
    if (side1 + side2 < side3 || // BUG: Should be <= on this line
        side2 + side3 <= side1 ||
        side1 + side3 <= side2 ||
        side1 <= 0 ||
        side2 <= 0 ||
        side3 <= 0) {
        return "not_a_triangle";
    }
    // if all the side lengths are equal,
    // it is an equilateral triangle
    if (side1 == side2 && side2 == side3) {
        return "equilateral";
    }
    // if any two sides are the same length,
    // it is an isosceles triangle
    if (side1 == side2 ||
        side2 == side3 ||
        side1 == side3) {
        return "isosceles";
    }
    // if the function hasn't returned yet,
    // it must be a scalene triangle
    return "scalene";
}
