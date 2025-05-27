#include <bits/stdc++.h>
using namespace std;

class Students
{
public:
    char name[40];
    int roll;
    float gpa;
};

int main()
{
    Students a, b;
    // char tmp[40] = "Mashrafi";
    // strcpy(a.name, tmp);
    // a.roll = 2;
    // a.gpa = 5.00;

    // char tmp2[40] = "Rakib";
    // strcpy(b.name, tmp2);
    // b.roll = 1;
    // b.gpa = 5.00;

    // without space in name input
    // cin >> a.name >> a.roll >> a.gpa;
    // cin >> b.name >> b.roll >> b.gpa;

    cin.getline(a.name, 40);
    cin >> a.roll >> a.gpa;

    cin.ignore();

    cin.getline(b.name, 40);
    cin >> b.roll >> b.gpa;

    cout << a.name << " " << "Role: " << a.roll << " GPA:" << " " << fixed << setprecision(2) << a.gpa << endl;
    cout << b.name << " " << "Role: " << a.roll << " GPA:" << " " << fixed << fixed << setprecision(2) << b.gpa << endl;

    return 0;
}