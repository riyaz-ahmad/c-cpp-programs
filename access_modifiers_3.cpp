
#include <bits/stdc++.h>
using namespace std;

//Base Class
class Parent
{   
    //protected data members
    protected:
        int id_protected;
};

//Derived Class
class Child : public Parent
{
    public:
        void setId(int id) {
            id_protected = id;
        }
        
        void displayId() {
            cout << "id_protected is: " << id_protected << endl;
        }
};

int main() {
    
    Child obj;
    
    //member function of the derived class can
    //access the protected data members of the base class
    obj.setId(81);
    obj.displayId();
    
    return 0;
}
