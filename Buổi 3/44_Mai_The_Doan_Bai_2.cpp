#include<bits/stdc++.h>
using namespace std;
//ngay san xuat
class DayProduct{
    private:
        int id;
        string name,address;
    public:
        void inPut(); 
        void outPut();
};
    void DayProduct::inPut(){
        cout<<"\nID: ";cin>>id;
        cout<<"\nAddress: ";cin.ignore();getline(cin, address);
        cout<<"\nName: ";cin.ignore();getline(cin,name);
    }
    void DayProduct::outPut(){
        cout<<"\nID: "<<id;
        cout<<"\nName: "<<name;
        cout<<"\nAddress: "<<address;
    }
    //hang hoa
class Merchandise{
    private:
        int id_of_Mer;
        string name_of_Mer;
        DayProduct x;
    public:
        void inPut();
        void outPut();
};
    void Merchandise::inPut(){
        cout<<"\nId of Merchandise: ";cin>>id_of_Mer;
        cout<<"\nName of Merchandise: ";cin.ignore();getline(cin,name_of_Mer);
        cout<<"\nDay of Product: ";x.inPut();
    }
        void Merchandise::outPut(){
        cout<<"\nId of Merchandise: "<<id_of_Mer;
        cout<<"\nName of Merchandise: "<<name_of_Mer;
        cout<<"\nDay of Product: "; x.outPut();
    }
int main(){
    int test;
    cout<<"\nEnter the quantity: ";
    cin>>test;
    vector<Merchandise>arr(test);
    cout<<"\nInput "<<test<<" Merchandise"<<endl;
    for(int i=0;i<test;i++){
        cout<<"\nMerchandise "<<i+1<<"th";
        arr[i].inPut();
    }
    cout<<"\nOutput"<<endl;
    for(int i=0;i<test;i++){
        cout<<"\n"<<"\t"<<i+1<<"th"<<endl;
        arr[i].outPut();
        cout<<endl;
    }
    return 0;
}