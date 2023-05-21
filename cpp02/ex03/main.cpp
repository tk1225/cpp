#include "Point.hpp"
#include <iostream>


// Input: A = (0, 0), B = (10, 30), C = (20, 0), P(10, 15)
// Output: Inside
// Explanation:
//               B(10,30)
//                 / \
//                /   \
//               /     \
//              /   P   \      P'
//             /         \
//      A(0,0) ----------- C(20,0) 

// Input: A = (0, 0), B = (10, 30), C = (20, 0), P(30, 15)
// Output: Outside
// Explanation:
//               B(10,30)
//                 / \
//                /   \
//               /     \
//              /       \      P
//             /         \
//      A(0,0) ----------- C(20,0) 

int main ( void ) {
    if ( bsp( Point(0, 0), Point(10, 30), Point(20, 0), Point(5, 15) ) == true ) {
        std::cout << "Point is in the triangle" << std::endl;
    } else {
        std::cout << "Point is not in the triangle" << std::endl;
    }
    return 0;
}
