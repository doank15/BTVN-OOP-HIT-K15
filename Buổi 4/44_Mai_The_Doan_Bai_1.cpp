#include <bits/stdc++.h>
using namespace std;
class Date
{
private:
    int day, month, year;

public:
    void input();
    void output();
    friend class Emp;
};
void Date::input()
{
    cout << "\nEnter Day: ";
    cin >> day;
    cout << "\nEnter Month: ";
    cin >> month;
    cout << "\nEnter Year: ";
    cin >> year;
}
void Date::output()
{
    cout << day << "/" << month << "/" << year;
}
class Employee
{
private:
    static int codeOfEmp;
    char nameOfEmp[30];
    Date Emp;

public:
    void input();
    void output();
};

int Employee::codeOfEmp = 1;

void Employee::input()
{
    cout << "\nEnter name of member: ";
    fflush(stdin);
    gets(nameOfEmp);
    cout << "\nEnter date of employee: ";
    Emp.input();
}
void Employee::output()
{
    cout << left << setw(20) << this->codeOfEmp++ << setw(20) << this->nameOfEmp;
    this->Emp.output();
    cout << endl;
}
int main()
{
    Employee *z;
    int n;
    cout << "\nEnter number member of company: ";
    cin >> n;
    z = new Employee[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\t" << i + 1 << "th"
             << "\n";
        z[i].input();
    }
    cout << left << setw(20) << "ID" << setw(20) << "Name" << setw(20) << "Date" << endl;
    for (int i = 0; i < n; i++)
    {

        z[i].output();
    }
    return 0;
}