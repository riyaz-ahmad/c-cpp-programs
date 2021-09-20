//this program is used to find the second maximum element in the array
#include<bits/stdc++.h>
using namespace std;

int secondMax(vector<int> &v){
    int n = v.size();
    int first, second;
    first = second = INT_MIN;
    for(int i=0;i<n;i++){
        if(v[i]>first){
            second = first;
            first = v[i];
        }
        else if(v[i]>second and first != v[i])
            second = v[i];
    }
    if(second==INT_MIN)
        return -1;
    else
        return second;
}
int main(){
    vector<int> v {10,15,12,11,36,40};
    cout<<secondMax(v);
    return 0;
}