#include "bin.h"

#include <bitset>
#include <iostream>

using bit8 = std::bitset<8>;

int main(void)
{

    std::cout
        << "Enter the decimal: " <<
    std::endl;

    int decimal;
    std::cin >> decimal;

    BinaryMath num = 2;
    
    num.upto_4d();
}
