
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "GeeksforGeeks";
    
    cout << "Length of String: " << s.size() << endl;
    
    //Clear out the given string
    s.clear();
    
    //Check if empty
    if (s.empty())
        cout << "String is empty\n";
        
    return 0;
}
