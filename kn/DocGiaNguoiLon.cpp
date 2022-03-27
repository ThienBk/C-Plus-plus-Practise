#include "DocGiaNguoiLon.h"
// phương thức nhập thông tin độc giả người lớn
void CDocGiaNguoiLon::Input(){
	CDocGia::Input();
	cin.ignore();
	cout << "\nNhap CMND:  ";
	getline(cin, CMND);
}
// phương thức xuất thông tin độc giả người lớn
void CDocGiaNguoiLon::Output(){
	CDocGia::Output();
	cout << "\nChung minh nhan dan: " << CMND;
}
// Phương thức tính tiền làm thẻ
int CDocGiaNguoiLon::Tinh_Tien_Lam_The(){
	return sothangcohieuluc * 10000;
}

CDocGiaNguoiLon::CDocGiaNguoiLon(){}
CDocGiaNguoiLon::~CDocGiaNguoiLon(){}
