//program to calculate the power of a number i.e. pow(x,y)
//x raised y 
#include<bits/stdc++.h>
using namespace std;
#define ll  long long int

ll power(ll x, unsigned ll y){
    if(y==0)
        return 1;
    //ll temp = power(x,y/2);
    if(y%2==0)
        return power(x,y/2) * power(x,y/2);
    else
        return power(x,y/2) * power(x,y/2)*x;
}

int main(){
    ll x;
    unsigned ll y;
    
    cin>>x>>y;
    cout<<"x^y = "<<power(x,y);
    return 0;
}