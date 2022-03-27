#include "DocGia.h"
#include <cstdio>
using namespace std;
void CDocGia::Input(){
	rewind(stdin); // xóa bộ nhớ đệm
	cout << "\nNhap ho ten doc gia: ";
	getline(cin, hoten);

	rewind(stdin);
	cout << "\nNhap ngay lap the(dd/mm/yyyy): ";
	getline(cin, ngaylapthe);

	cout << "\nNhap so thang co hieu luc: ";
	cin >> sothangcohieuluc;
}
// phương thức xuất thông tin độc giả
void CDocGia::Output(){
	cout << "\nHo ten doc gia: " << hoten;
	cout << "\nNgay lap the(dd/mm/yyyy): " << ngaylapthe;
	cout << "\nSo thang co hieu luc: " << sothangcohieuluc;
}
CDocGia::CDocGia(){
}
CDocGia::~CDocGia(){
}

