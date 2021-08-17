#include <bits/stdc++.h>
#include<iomanip>
using namespace std;
class IDofBill
{
private:
    char pID[10];
public:
    void input();
    void output();
    friend class Bill;
};
void IDofBill::input()
{
    cout << "\nEnter ID of Bill: ";
    fflush(stdin);
    gets(pID);
}
void IDofBill::output()
{
    cout << left << setw(1) << "\nID of Bill: " << setw(12) << pID<<endl;
}
class Provider
{
private:
    char idOfPro[5];
    char nameOfPro[20];
    char addressOfPro[50];
    char phoneNumber[13];
public:
    void input();
    void output();
    friend class Bill;
};
void Provider::input()
{
    cout << "\nEnter ID of Provider: ";
    fflush(stdin);
    gets(idOfPro);
    cout << "\nEnter Name of Provider: ";
    fflush(stdin);
    gets(nameOfPro);
    cout << "\nEnter Address of Provider: ";
    fflush(stdin);
    gets(addressOfPro);
    cout << "\nEnter PhoneNumber of Provider: ";
    fflush(stdin);
    gets(phoneNumber);
}
void Provider::output()
{
    cout<<endl;
    cout << left << setw(1) << "ID of Provider: "<<setw(20)<<idOfPro<< setw(1) << "Name of Provider: "<< nameOfPro<<endl;
    cout<<left<<setw(1) << "\nAddress: "<<setw(27) << addressOfPro <<setw(1)<<"Phone Number: "<<phoneNumber <<endl;
}

class Asset
{
private:
    int quantity;
    long long priceForOne;
    char idOfProduct[10];
    char nameOfProduct[10];
    char stateOfProduct[20];
public:
    void input();
    void output();
    friend class Bill;
};

void Asset::input()
{
 
    cout << "\nID of Product: "; fflush(stdin);
    gets(idOfProduct);
    cout << "\nName of Product: "; fflush(stdin);
    gets(nameOfProduct);
    cout << "\nState of Product: "; fflush(stdin);
    gets(stateOfProduct);
    cout << "\nQuantity of Product: ";
    cin >> quantity;
    cout << "\nPrice of One Product (VND): ";
    cin >> priceForOne;
}

void Asset::output()
{
    cout << left <<setw(12)<<idOfProduct<< setw(12) << nameOfProduct<<setw(12)<<stateOfProduct << setw(12) << priceForOne << setw(12) << quantity << setw(2) <<(long long) (priceForOne * quantity);
}

class Bill
{
private:
    IDofBill x;
    Provider y;
    Asset *n;
    int test;
public:
    void input();
    void output();
};
void Bill::input()
{
    x.input();
    y.input();
    cout << "\nEnter number of Product: ";
    cin >> test;
    n = new Asset[test];
    cout << "\nEnter the Infomation about Product of Bill: ";
    for (auto i = 0; i < test; i++)
    {
        cout<<"\n\t"<<i+1<<"th";
        n[i].input();
    }
}
void Bill::output(){
    cout<<left<<"\n\nHanoi University Of Industry"<<endl;
    cout << "\t\t"<< "Computer equipment entry form" << endl;
         x.output();
         y.output();
    cout << left << setw(12)<<"ID"<<setw(12) << "Name" <<setw(12)<<"State"<< setw(12) << "Price(one)" << setw(12) << "Quantity" << setw(12) << "Price(all)";
    cout<<endl;
   long long sum=0;
    for (auto i = 0; i < test; i++)
    {
        /* code */
        n[i].output();
        sum+=(n[i].priceForOne*n[i].quantity);
        cout<<endl;
    }
    cout<<left<<"Product Sum: "<<setw(30)<<test<<"Sum Of All: "<<sum<<" (dong)";
}
int main()
{
    Bill p;
    cout << "\nEnter the Infomation of Bill: ";
    p.input();
    p.output();

    return 0;
}