#include <bits/stdc++.h>
#include<iomanip>
using namespace std;
class CodeAndDate
{
private:
    char pID[10];
    char dateEstab[10];

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
    cout << "\nEnter dateEstab: ";
    fflush(stdin);
    gets(dateEstab);
}
void CodeAndDate::output()
{
    cout << left << setw(1) << "\nID of Bill: " << setw(12) << pID << setw(1) << " Date " << dateEstab;
}
class Provider
{
private:
    char idOfPro[5];
    char nameOfPro[20];
    char addressOfPro[50];

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
}
void Provider::output()
{
    cout<<endl;
    cout << left << setw(1) << "ID of Provider: "<<setw(12)<< idOfPro<< setw(1) << "Name of Provider: " << nameOfPro;
    cout << "\nAddress: " << addressOfPro << endl;
}

class Asset
{
private:
    char nameOfProduct[10];
    float priceForOne;
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
    cout << left << setw(12) << nameOfProduct << setw(12) << priceForOne << setw(12) << quantity << setw(2) << priceForOne * quantity;
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
    float sum=0;
    for (auto i = 0; i < test; i++)
    {
        /* code */
        n[i].output();
        sum+=(n[i].priceForOne*n[i].quantity);
        cout<<endl;
    }
    cout<<setw(12)<<"\n\t\t\tSum Of All"<<sum;
}
int main()
{
    Bill p;
    cout << "\nEnter the Infomation of Bill: ";
    p.input();
    p.output();

    return 0;
}