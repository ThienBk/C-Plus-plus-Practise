#include<iostream>
#include <string>
#include<string.h>
using namespace std;
struct TaiNghe {
	string MaTaiNghe, TenTaiNghe, NuocSX;
	float Donggia, Soluong;
	float Thanhtien = Soluong * Donggia;

	void Xuat(){
		cout<<MaTaiNghe<<"\t"<<TenTaiNghe<<"\t"<<NuocSX<<"\t"<<Soluong<<"\t"<<Donggia<<"\t"<<Thanhtien<<endl;
		}
};
typedef struct TaiNghe TAINGHE;
void NhapTT(TAINGHE& x) {
	rewind(stdin);
	cout << "\nNhap ma tai nghe: ";
	getline(cin, x.MaTaiNghe);

	cout << "\nNhap ten tai nghe: ";
	getline(cin, x.TenTaiNghe);

	cout << "\nNhap nuoc san xuat tai nghe: ";
	getline(cin, x.NuocSX);

	cout << "\nNhap dong gia tai nghe: ";
	cin >> x.Donggia;

	cout << "\nNhap so luong tai nghe: ";
	cin >> x.Soluong;
	
	cout << "\nNhap thanh tien tai nghe: ";
	cin >> x.Thanhtien;
}
void XuatTT(TAINGHE& x) {
	cout << "\nma tai nghe: " << x.MaTaiNghe << endl;
	cout << "\nten tai nghe: " << x.TenTaiNghe << endl;
	cout << "\nNuoc SX tai nghe: " << x.NuocSX << endl;
	cout << "\nDong gia tai nghe: " << x.Donggia << endl;
	cout << "\nSo luong tai nghe: " << x.Soluong << endl;
	cout << "\nDon gia tai nghe: " << x.Thanhtien << endl;
}
void NhapDanhSach(TAINGHE arr[], int n) {
	for (size_t i = 0; i < n; i++)
	{
		cout << "\n\n\t\tNhap thong tin tai nghe thu " << i + 1 << endl;
		NhapTT(arr[i]);
	}
}
void XuatDanhSach(TAINGHE arr[], int n) {
	for (size_t i = 0; i < n; i++)
	{
		cout << "\n\n\t\t Thong tin tai nghe thu " << i + 1 << endl;
		XuatTT(arr[i]);
	}
}

// tim kiem thong tin tai nghe
void TimKiem(TAINGHE arr[], int n,string x){
	for(int i= 0; i<n;i++){
		if(x == arr[i].TenTaiNghe){
			arr[i].Xuat();
		}
	}
}
//xap xep tai nghe theo thu tu tang dan cua don gia
void SapXep(TAINGHE arr[],int n){
	TAINGHE tg = arr[0];
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if( arr[i].Donggia>arr[j].Donggia){
				tg   = arr[i];
				arr[i]=arr[j];
				arr[j]=tg;
			}
		}
	}
}
//ten tai nghe gia > 250.000
void XuatTheoGia(TaiNghe tn[], int n){
	for(int i = 0; i < n; i++){
		if(tn[i].Donggia >25000){
			tn[i].Xuat();
		}
	}
}
void giaMax(TaiNghe tn[],int n){
	int Max= tn[0].Donggia;
	for(int i =0; i<n;i++){
		if(Max<tn[i].Donggia){
		Max=tn[i].Donggia;
		tn[i].Xuat();
		}
	}
}
int main() {
	TAINGHE arr[100];
	int n;
	cout << "\nnhap so luong tai nghe: ";
	cin >> n;
	cout << "\n\n\t\t Nhap danh sach tai nghe: \n";
	NhapDanhSach(arr, n);

	cout << "\n==========  Xuat danh sach tai nghe  ========== \n";
	XuatDanhSach(arr, n);

    string x;
	fflush(stdin);
	cout<<"Nhap ten san pham can tim: \n";
	getline(cin,x);
	TimKiem(arr,n,x);

	cout<<"Danh sach sau khi sap xep: \n";
	SapXep(arr,n);
	XuatDanhSach(arr,n);
	
	cout<<"Tai nghe co gia lon hon 25.000$ \n";
	XuatTheoGia(arr,n);
	
	cout<<"Tai nghe co gia lon nhat: \n";
	giaMax(arr,n);

	system("pause");
	return 0;
}