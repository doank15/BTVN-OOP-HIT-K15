#include<bits/stdc++.h>
using namespace std;
#define pi 3.14
class HinhTron{
    public:
        int r;
    public:
        float ChuVi(int r);
        float DienTich(int r);
};
    float HinhTron::ChuVi(int r){
        return 2*pi*r;
    }
    float HinhTron::DienTich(int r){
        return pi*pi*r;
    }
int main(){
    HinhTron hinhTron;
    cout<<"Nhap ban kinh r: ";
    cin>>hinhTron.r;
    cout<<"\nChu vi cua hinh tron: "<<hinhTron.ChuVi(hinhTron.r);
    cout<<"\nDien tich cua hinh tron: "<<hinhTron.DienTich(hinhTron.r);
    return 0;
}