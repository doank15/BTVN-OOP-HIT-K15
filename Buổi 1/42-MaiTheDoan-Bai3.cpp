#include<bits/stdc++.h>
using namespace std;
#define pi 3.14
class CanBo{
    public:
        int maCanBo,soNgayLamViec,ngaySinh;
        char hoVaTen[20];
    public:
        void InPut();
        int Luong(int soNgayLamViec);
        void OutPut();
};
    void CanBo::InPut(){
        cout<<"\nNhap ma can bo: ";
        cin>>maCanBo;
        cin.ignore();
        cout<<"\nNhap ho va ten: ";
        gets(hoVaTen);
        cout<<"\nNhap ngay sinh: ";
        cin>>ngaySinh;
        cout<<"\nNhap so ngay lam viec trong thang: ";
        cin>>soNgayLamViec;
    }
    int CanBo::Luong(int soNgayLamViec){
        return soNgayLamViec*250000;
    }
    void CanBo::OutPut(){
        cout<<"\nMa can bo: "<<maCanBo;
        
        cout<<"\nHo va ten: "<<hoVaTen;
        
        cout<<"\nNgay sinh: "<<ngaySinh;
        
        cout<<"\nSo ngay lam viec trong thang: "<<soNgayLamViec;
    }
    
int main(){
    CanBo NguyenVanA;
    cout<<"\nNhap thong tin can bo: ";
    NguyenVanA.InPut();
    cout<<"\n\nThong tin can bo: ";
    NguyenVanA.OutPut();
    cout<<"\n\nLuong Can Bo: "<<NguyenVanA.Luong(NguyenVanA.soNgayLamViec);
    return 0;
}