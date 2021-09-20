//This program check if a LSB of number is set or not
/*
check LSB of a number we need to perform bitwise ANDing. 
The bitwise AND operation number & 1 will evaluate to 1 if LSB of number is set i.e. 1 otherwise evaluates to 0.
eg 3 and 4
3&1 => 011 & 001 = 0001 ->LSB is Set
4&1 => 100 & 001 = 000 ->LSB is Not Set
*/
#include<bits/stdc++.h>
using namespace std;
//we will do this by doing AND b/w the number and 1
int main(){
    int num = 12;
    int num2 = 15;
    if(num2&1)
        cout<<"Set";
    else
        cout<<"Not Set";
    return 0;

}