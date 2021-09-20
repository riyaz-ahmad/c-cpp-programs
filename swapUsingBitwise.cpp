//swap two numbers using the bitwise operators
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 10;
    int b = 20;
    cout<<"Before Swap: a = "<<a<<" b = "<<b<<endl;
    a = a^b;
    b = a^b;
    a = a^b;
    cout<<"After Swap: a = "<<a<<" b = "<<b<<endl;
    return 0;
}