#include<bits/stdc++.h>
using namespace std;
//Date
class Date{
    private:
        int day,month,year;
    public:
        void inPut(); 
        void outPut();
};
    void Date::inPut(){
        cout<<"\nDay: ";cin>>day;
        cout<<"\nMonth: ";cin>> month;
        cout<<"\nYear: ";cin>>year;
    }
    void Date::outPut(){
        cout<<"\nDay: "<<day;
        cout<<"\nMonth: "<<month;
        cout<<"\nYear: "<<year;
    }
//Dia chi
class Address{
    private:
        char contact[12], ward[30],district[30],city[30];
    public:
        void inPut();
        void outPut();
};
    void Address::inPut(){
        cout<<"\nContact Us: ";cin.ignore();gets(contact);
        cout<<"\nWard: ";cin.ignore();gets(ward);
        cout<<"\nDistrict: ";cin.ignore();gets(district);
        cout<<"\nCity: ";cin.ignore();gets(city);
    }
        void Address::outPut(){
        cout<<"\nContact Us: "<<contact;
        cout<<"\nWard: "<<ward;
        cout<<"\nDistrict: "<<district;
        cout<<"\nCity: "<<city;
    }
//Doanh nghiep
class Enterprise{
    private:
        int id;
        char name[60];
        Date dStart;
        Address addr;
        char mDirector[30];
        long turnOver;
    public:
        void inPut();
        void outPut();
};
//input
void Enterprise::inPut(){
    cout<<"\nID: ";cin>>id;
    cout<<"\nName: ";cin.ignore();gets(name);
    cout<<"\nDate: ";dStart.inPut();
    cout<<"\nAddress ";addr.inPut();
    cout<<"\nManager Director: ";cin.ignore();gets(mDirector);
    cout<<"\nTurn Over: ";cin>>turnOver;
}
void Enterprise::outPut(){
    cout<<"\nID: "<<id;
    cout<<"\nName: "<<name;
    cout<<"\nDate: ";dStart.outPut();
    cout<<"\nAddress ";addr.outPut();
    cout<<"\nManager Director: "<<mDirector;
    cout<<"\nTurn Over: "<<turnOver;    
}
int main(){
   Enterprise e1;
   cout<<"\nEnter the  Information of Enterprise";
   e1.inPut();
   cout<<"\nThe Information of Enterprise: ";
   e1.outPut();
    return 0;
}