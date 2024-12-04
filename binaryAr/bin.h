#pragma once

#include <iostream>
#include <bitset>
#include <string>

using binary = std::bitset<8>;
using binary4 = std::bitset<4>;

// TODO: check for overflow, Update for negative decimals
class BinaryMath{

    private:

    int decimal;
    binary bits;

    public:

    BinaryMath(): decimal(0), bits(0) {}
    ~BinaryMath() = default;

    BinaryMath(int data): decimal(data), bits(data) {}

    binary 
    to_Bin ()
    {
        return bits;
    }

    binary
    to_OC()
    {
        return (~bits);    
    }

    binary
    to_TC()
    {
        int value = bits.to_ulong() + 1;
        return std::bitset<8>(value & 0xFF);
    }

    void 
    upto_4d()
    {
        for(int i= 3; i>=0; i--){
            std::cout << bits[i];
        }
        std::cout << std::endl;
    }

    void
    print()
    {
        std::cout << bits << std::endl;
    }
};
