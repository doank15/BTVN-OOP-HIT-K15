#include<bits/stdc++.h>
using namespace std;
//Date
class School{
    public:
        int s_Date;
        char s_Name[30];
};
//Dia chi
class Faculty{
    private:
        int date;
        char name[30];
        School x;
    public:
        void inPut();
        void outPut();
};
    void Faculty::inPut(){
        cout<<"\nDate: ";cin>>date;
        cout<<"\nName: ";cin.ignore();gets(name);
        cout<<"\nDate of School ";cin>>x.s_Date;
        cout<<"\nName of School ";cin.ignore();gets(x.s_Name);
    }
        void Faculty::outPut(){
        cout<<"\nDate: "<<date;
        cout<<"\nName: "<<name;
        cout<<"\nDate of School: "<<x.s_Date;
        cout<<"\nName of Scohool: "<<x.s_Name;
    }
//Doanh nghiep
class Student{
    private:
        Faculty y;
        float scoreOfStudent;
        string classOfStudent;
    public:
        Student(){};
        void inPut();
        void outPut();
};

//input
void Student::inPut(){
    cout<<"\nScore of Student: ";cin>>scoreOfStudent;
    cout<<"\nClass of Student: ";cin.ignore();getline(cin,classOfStudent);
    cout<<"\nFaculty : ";y.inPut();
}
void Student::outPut(){
    cout<<"\nScore of Student: "<<scoreOfStudent;
    cout<<"\nClass of Student: "<<classOfStudent;
    cout<<"\nFaculty : ";y.outPut();
}
int main(){
    int test;
    cout<<"\nEnter number of test you want to check: ";
    cin>>test;
    vector<Student>arr(test);
    cout<<"\nEnter the Information of Student ";
    for(int i=0;i<test;i++){
        cout<<"\n"<<"\t"<<i+1<<"th";
        arr[i].inPut();
    }
    cout<<"\nThe Information of Student after input: ";
     for(int i=0;i<test;i++){
        cout<<"\n"<<"\t"<<i+1<<"th";
        arr[i].outPut();
    }
    return 0;
}