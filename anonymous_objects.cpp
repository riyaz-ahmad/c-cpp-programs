
#include <bits/stdc++.h>
using namespace std;
  
class Math {
    public:
        int add(int x, int y) { return x + y; }
        int mul(int x, int y) { return x * y; }
};

int main() 
{
    cout << Math().add(5,6) << endl;
    cout << Math().mul(5,6) << endl;
    return 0; 
}
