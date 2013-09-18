#include <iostream>
#include "Resistor.h"

using namespace std;

int main()
{
    long double r2(parallelResistance( 1, 5));// 2 resistors in parallel

    cout
        << "R2: " << r2
        << '\n'
        << "R3: " << parallelResistance( 1, 5, 9)  // 3 resistors in parallel
        << '\n'
        << "R4: " << parallelResistance( 1, 5, 9, 6)  // 4 resistors in parallel
        << '\n'
        << "R5: " << serialResistance (8, r2) // see picture, R3 is 8 ohm
    << '\n';

    return 0;
}
