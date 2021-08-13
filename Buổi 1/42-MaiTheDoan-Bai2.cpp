#include<bits/stdc++.h>
using namespace std;
#define pi 3.14
class SinhVien{
    public: 
        int maSinhVien,ngaySinh,thangSinh,namSinh;
        float diemTrungBinh;
        char hoVaTen[30],daoDuc[4],gioiTinh[5];
    public:
        void InPut();
        void OutPut();
};

void SinhVien::InPut(){
        cout<<"\nNhap ma Sinh Vien: ";
        cin>>maSinhVien;
        cin.ignore();
        cout<<"\nNhap ho va ten Sinh Vien: ";
        gets(hoVaTen);
        cout<<"\nNhap Ngay sinh - Thang sinh - Nam sinh: ";
        cin>>ngaySinh>>thangSinh>>namSinh;
        cin.ignore();
        cout<<"\nNhap gioi tinh: ";
        gets(gioiTinh);
        cout<<"\nNhap diem trung binh: ";
        cin>>diemTrungBinh;
        cout<<"\nXep loai dao duc: ";
        cin>>daoDuc;
    } 
void SinhVien::OutPut(){
        cout<<"\nMa Sinh Vien: "<<maSinhVien;
        cout<<"\nHo va ten Sinh Vien: "<<hoVaTen;
        cout<<"\nBirthDay: "<<ngaySinh<<"/"<<thangSinh<<"/"<<namSinh;
        cout<<"\nGioi tinh: "<<gioiTinh;
        cout<<"\nDiem trung binh: "<<diemTrungBinh;      
        cout<<"\nXep loai dao duc: "<<daoDuc;
    } 

int main(){
    SinhVien SVDiemCao,SVDiemThap;
    cout<<"\nNhap thong tin SVDiemCao: ";
    SVDiemCao.InPut();
    cout<<"\nNhap thong tin SVDiemThap: ";
    SVDiemThap.InPut();
    if(SVDiemCao.diemTrungBinh<SVDiemThap.diemTrungBinh){
        swap(SVDiemCao.maSinhVien,SVDiemThap.maSinhVien);
        swap(SVDiemCao.hoVaTen,SVDiemThap.hoVaTen);
        swap(SVDiemCao.ngaySinh,SVDiemThap.ngaySinh);
        swap(SVDiemCao.thangSinh,SVDiemThap.thangSinh);
        swap(SVDiemCao.namSinh,SVDiemThap.namSinh);
        swap(SVDiemCao.gioiTinh,SVDiemThap.gioiTinh);
        swap(SVDiemCao.diemTrungBinh,SVDiemThap.diemTrungBinh);
        swap(SVDiemCao.daoDuc,SVDiemThap.daoDuc);
    }
    cout<<"\nSVDiemCao: ";
    SVDiemCao.OutPut();
    cout<<"\n\nSVDiemThap: ";
    SVDiemThap.OutPut();
    return 0;
}