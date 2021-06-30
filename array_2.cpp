// This C++ program compiles fine
// as index out of bound
// is not checked in C++.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[2];
    cout << arr[3] << " " << arr[-2] << " ";
    return 0;
}