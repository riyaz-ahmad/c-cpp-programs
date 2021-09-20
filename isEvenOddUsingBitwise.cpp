/*
Even Odd Program using Bitwise Operators
. Using Bitwise AND operator: 
The idea is to check whether the last bit of the number is set or not.
 If the last bit is set then the number is odd, otherwise even. 
As we know bitwise AND Operation of the Number by 1 increment the value of the number by 1 if the number is even otherwise
it decrements the value of the number by 1 if the value is odd.
*/
#include<bits/stdc++.h>
using namespace std;
//we will do this by doing AND b/w the number and 1
int main(){
    int num = 12;
    int num2 = 15;
    if(num&1)
        cout<<"ODD";
    else
        cout<<"EVEN";
    return 0;

}