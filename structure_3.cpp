
#include <bits/stdc++.h>
using namespace std;

typedef struct student {
    string id, name;
    int year;
    double cgpa;
};

int main()
{

    student team[] = {
        { "GFG1", "Robert", 3, 8.67 },
        { "GFG2", "Chris", 2, 9.13 },
        { "GFG3", "Mark", 4, 8.43 },
    };

    for (int i = 0; i < 3; i++)
        cout << "ID: " << team[i].id << ", Name: " << team[i].name << ", Year: " << team[i].year << ", CGPA: " << team[i].cgpa << endl;

    return 0;
}
