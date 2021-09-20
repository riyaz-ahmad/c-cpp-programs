//This program clculates the square root of a number
#include<bits/stdc++.h>
using namespace std;

//function for calculation square root
float sqrRoot(int num, int pre){//pre means upto what fractional precesion square needs to be print
    int st = 0, end = num,mid;
    float ans;
    //for the calculatio of int part
    while(st<=end){
        mid = (st+end)/2;
        if(mid*mid == num){
            ans = mid;
            break;
        }
        if(mid*mid<num){
            st = mid+1;
            ans = mid;
        }
        else{
            end = mid-1;
        }
    }
    //for the calculation of float part
    float inc = 0.1;
    for(int i=0;i<pre;i++){
        while(ans*ans<=num){
            ans += inc;
        }
        ans = ans-inc;
        inc = inc/10;
    }
    return ans;
}

int main(){
    cout<<sqrRoot(110,3);
    return 0;
}
