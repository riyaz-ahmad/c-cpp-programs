
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[]="hello";
    for (int i=0;i<strlen(str);i++)
        cout<<(char)(str[i]-'a'+'A');
    return 0;
}
