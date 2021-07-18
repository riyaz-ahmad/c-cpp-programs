
#include <bits/stdc++.h>
using namespace std;

void swap(int &x, int &y)
{
    int tmp = x;
    x = y;
    y = tmp;
}

int main()
{
    int a = 5, b = 6;
    
    swap(a, b);
    
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    
    return 0;
}
