#include "bit.hpp"

/*
Given two integers dividend and divisor, divide two integers without using multiplication, division, and mod operator. The integer division should truncate toward zero, which means losing its fractional part. For example, 8.345 would be truncated to 8, and -2.7335 would be truncated to -2. Return the quotient after dividing dividend by divisor.

int main(int argc, char **argv) {
    int dividend = 0b1010; // 10
    int divisor = 0b11; // 3
    int quotient = divide(dividend, divisor); // 3
    cout << bitset<9>(quotient) << endl;
    return 0;
}
*/

// Method 1: bit operation

int divide1(int dividend, int divisor) {
    if(dividend == divisor)
        return 1;
    bool isPositive = (dividend<0 == divisor<0);    // if both are of same sign, answer is positive
    unsigned int a = abs(dividend);
    unsigned int b = abs(divisor);
    unsigned int ans = 0;
    while(a >= b){  // while dividend is greater than or equal to divisor
        short q = 0;
        while(a > (b<<(q+1)))
            q++;
        ans += (1<<q);  // add the power of 2 found to the answer
        a = a - (b<<q);  // reduce the dividend by divisor * power of 2 found
    }
    if(ans == (1<<31) and isPositive)   // if ans cannot be stored in signed int
        return INT_MAX;
    return isPositive ? ans : -ans;
}