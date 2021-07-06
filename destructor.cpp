
#include <bits/stdc++.h>
using namespace std;

char* p_chr;

class String {
public:
    char* s;
    int size;

    String(char* c)
    {
        size = strlen(c);
        s = new char[size + 1];
        p_chr = s; // assign to global variable
        strcpy(s, c);
    }
};

void func()
{
    String str("Hello World");
}

int main()
{
    func();
    cout << p_chr << endl;
    return 0;
}
