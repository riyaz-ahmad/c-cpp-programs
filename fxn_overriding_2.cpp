
#include <bits/stdc++.h>
using namespace std;

class Base {
    public:
        void whoami() {
            cout << "I'm Base Class!!\n";
        }
};

class Derived : public Base {
    public:
        void whoami() {
            // call Base class's version
            Base::whoami();
            cout << "I'm Derived Class!!\n";
        }
};

int main()
{
    Derived d;
    
    d.whoami();
    
    return 0;
}
