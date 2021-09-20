/*
Logic to check Most Significant Bit (MSB) of a number
We use bitwise AND & operator to check status of any bit. 
Bitwise AND operation evaluate each bit of resultant value as 1, if corresponding bit of operands is 1.

Step by step descriptive logic to check MSB of a number.
Input a number from user. Store it in some variable say num.
Find number of bits required to represent an integer in memory. Use sizeof() operator to find size of integer in bytes. 
Then multiply it by 8 to get number of bits required by integer. Store total bits in some variable say bits = sizeof(int) * 8;
To get MSB of the number, move first bit of 1 to highest order.
Left shift 1 bits - 1 times and store result in some variable say msb = 1 << (bits - 1).
If bitwise AND operation num & msb evaluate to 1 then MSB of num is set otherwise not.
*/
#include<bits/stdc++.h>
using namespace std;

#define BITS sizeof(int)/8//bits reqd to represent int

int main(){
    int num = -1;
    int msb = 1 <<(BITS-1);
    if(num & msb){
        cout<<"Set";
    }
    else   
        cout<<"Not Set";
    return 0;
}