
#include <bits/stdc++.h>
using namespace std;
 
int main() 
{ 
    char s1[] = "GeeksforGeeks";
    char s2[] = "for";
    char *p;
    
    p = strstr(s1, s2);
  
    if (p) 
        cout << "First occurrence of string '" << s2
        << "'\n in '" << s1 << "' is '" << p <<"'"<<endl; 
    else
        cout << "String not found\n"; 
  
    return 0; 
}
