#include<bits/stdc++.h>
using namespace std;
class Fraction{
    private:
        int tuSo,mauSo;
    public:
        Fraction();
        Fraction(int tuSo, int mauSo);
        ~Fraction();
        void Input();
        void Output();
        void Simple(); 
        int USC(int a, int b);
};

    //ham tao khong doi
    Fraction::Fraction(){
       tuSo=2;
       mauSo=4;
    }
    //ham tao co doi
    Fraction::Fraction(int tuSo, int mauSo){
        this->tuSo=tuSo;
        this->mauSo=mauSo;
    }
    //ham huy
    Fraction::~Fraction(){
    
        tuSo=mauSo=0;
    }
    //Input
    void Fraction::Input(){
        cout<<"\nNhap tu so va mau so: "<<endl;
        cin>>tuSo>>mauSo;
    }
    //Output
    void Fraction::Output(){
        cout<<tuSo<<"/"<<mauSo;
    }
    //tim uoc chung lon nhat cua tu va mau
    int Fraction::USC(int a, int b){
        while(a!=b){
            if(a>b){
                a-=b;
            }
            else{
                b-=a;
            }
        }
        return a;
    }
    void Fraction::Simple(){
        int d=USC(tuSo,mauSo);
        tuSo/=d;
        mauSo/=d;
        cout<<"\nPhan so sau khi rut gon: "<<tuSo<<"/"<<mauSo;
    }
int main(){
    Fraction P(2,4),Q;
    cout<<"\nP:\n";
    cout<<"\nPhan so P co dang: ";
    P.Output();
    P.Simple();
    // cout<<"\nPhan So P sau khi rut gon: ";
    // P.Output();
    cout<<"\nQ:\n";
    Q.Input();
    cout<<"\nPhan so Q co dang: ";
    Q.Output();
    Q.Simple();
    // cout<<"\nPhan so sau khi rut gon: "; 
    // Q.Output();
    return 0;
}