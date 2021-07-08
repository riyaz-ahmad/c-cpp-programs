
#include <bits/stdc++.h>
using namespace std;
 
class Base
{
    public:
        void whoami() {
            cout << "I'm Base\n";
        }
};
 
class Derived: public Base
{
    public:
        void whoami() {
            cout << "I'm Derived\n";
        }
};
 
int main(void)
{
    Base *b_ptr = new Derived;
    
    //run-time polymorphism
    b_ptr->whoami();
    return 0;
}
