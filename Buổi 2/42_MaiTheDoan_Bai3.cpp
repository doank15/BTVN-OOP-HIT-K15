#include<bits/stdc++.h>
using namespace std;
class Product{
    private:
        int donGia,soLuong;
        string tenHang,maHang,ngayNhap,ngaySanXuat;
    public:
        Product();
        Product(string maHang, string tenHang,string ngayNhap, int donGia, int soLuong, string ngaySanXuat);
        ~Product();
        void Input();
        void Output();
};

    Product::Product(){
        maHang="";
        tenHang="";
        ngayNhap="";
        donGia=0;
        soLuong=0;
        ngaySanXuat="";
    }
    Product::Product(string maHang, string tenHang,string ngayNhap, int donGia, int soLuong, string ngaySanXuat){
        this->maHang=maHang;
        this->tenHang=tenHang;
        this->ngayNhap=ngayNhap;
        this->donGia=donGia;
        this->soLuong=soLuong;
        this->ngaySanXuat=ngaySanXuat;  
    }
    Product::~Product(){
        maHang="";
        tenHang="";
        ngayNhap="";
        donGia=0;
        soLuong=0;
        ngaySanXuat="";
    }
    void Product::Input(){
        cout<<"\nNgay nhap: \n";cin.ignore();getline(cin,ngayNhap);
        cout<<"\nDon gia: ";cin>>donGia;
        cout<<"\nSo luong: ";cin>>soLuong;
        cin.ignore();
        cout<<"\nNgay san xuat: \n";getline(cin,ngaySanXuat);
        cout<<"\nMa hang: ";cin>>maHang;
        cout<<"\nTen Hang: ";cin>>tenHang;
    }
    void Product::Output(){
        cout<<"\nNgay nhap: "<<ngayNhap;
        cout<<"\nDon gia: "<<donGia;
        cout<<"\nSo luong: "<<soLuong;
        cout<<"\nNgay san xuat: "<<ngaySanXuat;
        cout<<"\nMa hang: "<<maHang;
        cout<<"\nTen Hang: "<<tenHang;
    }
int main(){
    Product P,Q("Q15079", "Vay", "14 11 2021",1000000,10,"11 12 2021");
    cout<<"\nMat hang P: "<<endl;
    P.Input();
    cout<<"\nThong tin ve mat hang P: "<<endl;
    P.Output();
    cout<<endl;
    cout<<"\nThong tin ve mat hang Q: ";
    Q.Output();
    return 0;
}