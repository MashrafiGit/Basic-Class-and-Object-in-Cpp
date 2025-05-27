#include <bits/stdc++.h>
using namespace std;

class Students
{
public:
    char name[40];
    int roll;
    float gpa;

    Students(char *n, int r, float g)
    {
        strcpy(name, n);
        roll = r;
        gpa = g;
    }
};

int main()
{
    Students a("Mashrafi", 1, 5.00);
    Students b("Rakib", 2, 5.00);

    cout << a.name << " " << "Role: " << a.roll << " GPA:" << " " << fixed << setprecision(2) << a.gpa << endl;
    cout << b.name << " " << "Role: " << a.roll << " GPA:" << " " << fixed << fixed << setprecision(2) << b.gpa << endl;

    return 0;
}