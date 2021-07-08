
#include <bits/stdc++.h>
using namespace std;
  
//forward-declaration is necessary for usage in A as B is not defined yet
class B;
  
class A 
{ 
    public: 
        void showB(B &x); 
}; 
  
class B
{ 
    private: 
        int b; 
    public: 
        B() : b(0) {}
        
        //Friend function Declaration
        friend void A::showB(B &x); 
}; 
 
//Friend Member Function Definition
void A::showB(B &x) 
{
    cout << "B::b = " << x.b;
} 
  
int main() 
{ 
    A a; 
    B x;
    
    a.showB(x);
    
    return 0; 
}
