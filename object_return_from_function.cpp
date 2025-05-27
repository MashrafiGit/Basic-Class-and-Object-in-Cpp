#include <bits/stdc++.h>
using namespace std;

class Students
{
public:
    char name[40];
    int roll;
    float gpa;

    Students(char *name, int roll, float gpa)
    {
        strcpy(this->name, name);
        this->roll = roll;
        this->gpa = gpa;
    }
};

Students fun()
{
    Students a("Mashrafi", 1, 5.00);
    return a;
}

int main()
{

    Students t = fun();

    cout << t.name << " " << "Role: " << t.roll << " GPA:" << " " << fixed << setprecision(2) << t.gpa << endl;

    return 0;
}