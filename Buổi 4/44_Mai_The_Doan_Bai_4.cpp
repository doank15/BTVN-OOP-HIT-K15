#include <bits/stdc++.h>
#include<iomanip>
using namespace std;
class CodeAndDate
{
private:
    char pID[10];
    char dateEstab[15];

public:
    void input();
    void output();
    friend class Bill;
};
void CodeAndDate::input()
{
    cout << "\nEnter ID of Bill: ";
    fflush(stdin);
    gets(pID);
    cout << "\nEnter Date: ";
    fflush(stdin);
    gets(dateEstab);
}
void CodeAndDate::output()
{
    cout << left << setw(1) << "\nID of Bill: " << setw(12) << pID << setw(1) << " Date " << dateEstab;
}
class Address{
    private:
        int numberofH,alley;
        char town[10],ward[10],district[20],city[20];
    public:
        void input();
        void output();
        friend class Bill;
        friend class Provider;
};
void Address::input(){
    cout<<"\nNumber of House: ";cin>>numberofH;
    cout<<"\nAlley: ";cin>>alley;
    cout<<"\nTown: ";fflush(stdin);gets(town);
    cout<<"\nWard: ";fflush(stdin);gets(ward);
    cout<<"\nDistrict: ";fflush(stdin);gets(district);
    cout<<"\nCity: ";fflush(stdin);gets(city);
}
void Address::output(){
   cout<<"Number "<<numberofH<<", Alley "<<alley<<" Town "<<town<<", Ward "<<ward<<", District "<<district<<", "<<city<<endl;
}
class Provider
{
private:
    char phoneNumber[20];
    char name[50];
    Address addOfhuman;
public:
    void input();
    void output();
    friend class Bill;
};
void Provider::input()
{
    cout << "\nName: ";
    fflush(stdin);
    gets(name);
    cout << "\nPhone Number: ";
    fflush(stdin);
    gets(phoneNumber);
    addOfhuman.input();
}
void Provider::output()
{
    cout<<endl;
    cout<<left<<setw(2)<<"Name: "<<name<<endl;
    cout<<left<<setw(2)<<"Phone: "<<phoneNumber<<endl;
    cout<<left<<setw(2)<<"Address: ";addOfhuman.output();
}

class Asset
{
private:
    char nameOfProduct[10];
    long long priceForOne;
    int quantity;

public:
    void input();
    void output();
    friend class Bill;
};

void Asset::input()
{
    cout << "\nName of Product: "; fflush(stdin);
    gets(nameOfProduct);
    cout << "\nPrice of One Product: ";
    cin >> priceForOne;
    cout << "\nQuantity of Product: ";
    cin >> quantity;
}

void Asset::output()
{
    cout << left << setw(12) << nameOfProduct << setw(12) << priceForOne << setw(12) << quantity << setw(2) <<(long long)(priceForOne * quantity);
}

class Bill
{
private:
    CodeAndDate x;
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
    cout << "\nEnter number of Asset: ";
    cin >> test;
    n = new Asset[test];
    cout << "\nEnter the Infomation about Asset of Bill: ";
    for (auto i = 0; i < test; i++)
    {
        cout<<"\n\t"<<i+1<<"th";
        n[i].input();
    }
}
void Bill::output(){
    cout << "\t\t"<< "Bill" << endl;
         x.output();
         y.output();
    cout << left << setw(12) << "Name" << setw(12) << "Price" << setw(12) << "Quantity" << setw(12) << "Price";
    cout<<endl;
    long long sum=0;
    for (auto i = 0; i < test; i++)
    {
        /* code */
        n[i].output();
        sum+=(n[i].priceForOne*n[i].quantity);
        cout<<endl;
    }
    cout<<setw(13)<<"\n\t\t\tSum Of All: "<<sum<<" (dong)";
}
int main()
{
    Bill p;
    cout << "\nEnter the Infomation of Bill: ";
    p.input();
    p.output();

    return 0;
}