
#include <bits/stdc++.h>
using namespace std;

class Employee {
    public:
        string id, name;
        int years;
        
        
        Employee(string id, string name, int years) {
            this->id = id;
            this->name = name;
            this->years = years;
        }
      
        void printDetails() {
            cout << "ID: " << id
                 << ", Name: " << name
                 << ", Experience: " << years;
        }
};

int main()
{
    Employee emp("GFG123", "John", 4);
    
    emp.printDetails();
    return 0;
}
