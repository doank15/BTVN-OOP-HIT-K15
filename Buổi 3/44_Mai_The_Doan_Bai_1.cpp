#include<bits/stdc++.h>
using namespace std;
class Employee{
    private:
        int id,age;
        string name;
        static int salary;
    public:
        Employee();
        Employee(int id, int age, string name, int salary);
        void inPut();
        void outPut();   
};
 int Employee::salary = 10000000;
    Employee::Employee(){
        id=0;
        age=0;
        name="";
    }
    Employee::Employee(int id, int age, string name, int salary){
        this->id=id;
        this->age=age;
        this->name=name;
        this->salary=salary;
    }
    void Employee::inPut(){
        cout<<"\nID: ";cin>>id;
        cout<<"\nAGE: ";cin>>age;
        cin.ignore();
        cout<<"\nName: ";getline(cin,name);
    }
    void Employee::outPut(){
        cout<<"\nID: "<<id;
        cout<<"\nAGE: "<<age;
        cout<<"\nName: "<<name;
        cout<<"\nSalary: "<<salary<<" VND";
    }
   
int main(){
    Employee e1, e2;
    cout<<"\nEmployee 1:(in) ";
    e1.inPut();
    cout<<"\nEmployee 1: (out)";
    e1.outPut();
    cout<<"\nEmployee 2:(in) ";
    e2.inPut();
    cout<<"\nEmployee 2: (out)";
    e2.outPut();
    return 0;
}