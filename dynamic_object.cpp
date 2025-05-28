#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[30];
    int cls;
    int roll;

    Student(char *name, int cls, int roll)
    {
        strcpy(this->name, name);
        this->cls = cls;
        this->roll = roll;
    }
};

Student *fun()
{
    Student *a = new Student("mashrafi", 12, 1);
    return a;
}

int main()
{
    Student *a = fun();
    cout << a->name << " " << a->cls << " " << a->roll;

    return 0;
}