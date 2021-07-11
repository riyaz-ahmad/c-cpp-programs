
#include <bits/stdc++.h>
using namespace std;

union test {
    int x, y;
};

int main()
{
    test t;
    t.x = 2;
    cout << t.x << " " << t.y << endl;
    t.y = 3;
    cout << t.x << " " << t.y << endl;

    return 0;
}
