#include<bits/stdc++.h>
using namespace std;
class QuadraticEquation2{
    private:
        int a,b,c;
    public:
        QuadraticEquation2();
        QuadraticEquation2(int a, int b, int c);
        ~QuadraticEquation2();
        void Input();
        void Output();
        void Solve();
};
    QuadraticEquation2::QuadraticEquation2(){
        a=b=c=0;
    }
    QuadraticEquation2::QuadraticEquation2(int a, int b, int c){
        this->a=a;
        this->b=b;
        this->c=c;
    }
    QuadraticEquation2::~QuadraticEquation2(){
        a=b=c=0;
    }
    //Input
    void QuadraticEquation2::Input(){
        cout<<"\nNhap lan luot 3 so nguyen a,b,c: \n";
        cin>>a>>b>>c;
    }
    //Output
    void QuadraticEquation2::Output(){
        cout<<"\nPhuong trinh bac 2: ";
        cout<<a<<"x^2"<<"+"<<b<<"x+"<<c<<"= 0";
    }   
    //Solve
    void::QuadraticEquation2::Solve(){
        if (a==0)
        {
            if (b==0&&c==0)
            cout<<"INF"<<endl;
            if (b==0&&c!=0)
            cout<<"NO"<<endl;
            if (b!=0)
            cout<<(1.0)-c/b<<endl;
        }
        else{
            float del=b*b-4*a*c;
        if(del<0){
            cout<<"\nPhuong Trinh Vo Nghiem.";
        }
        else if(del==0){
            cout<<"\nPhuong trinh co nghiem duy nhat: "<<-b/2*a;
        }
        else{
            cout<<"\nPhuong trinh co 2 nghiem phan biet: "<<1.0*(-b+sqrt(del))/2*a<<" "<<1.0*(-b-sqrt(del))/2*a;
        }
    }
}
int main(){
    QuadraticEquation2 P(1,2,3),Q;
    cout<<"\nPhuong Trinh P: ";
    P.Output();
    P.Solve();
    cout<<"\nPhuong Trinh Q: ";
    Q.Input();
    Q.Output();
    Q.Solve();
    return 0;
}
