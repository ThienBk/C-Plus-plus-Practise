#include "DocGiaTreEm.h"
// phương thức nhập thông tin độc gỉa trẻ em
void CDocGiaTreEm::Input(){
	// gọi lại phương thức nhập thông tin độc giả của lớp cha CDocGia 
	CDocGia::Input(); // nhập các thông tin chung

	cin.ignore(); // xóa bộ nhớ đệm
	cout << "\nNhap ho ten nguoi dai dien: ";
	getline(cin, hotenNDD);
}
// phương thức xuất thông tin độc gỉa trẻ em 
void CDocGiaTreEm::Output(){
	CDocGia::Output(); // xuất ra các thông tin chung
	cout << "\nHo ten nguoi dai dien: " << hotenNDD;
}
// phương thức tính tiền làm thẻ của độc gỉa trẻ em 
int CDocGiaTreEm::Tinh_Tien_Lam_The(){
	return sothangcohieuluc * 5000;
}
CDocGiaTreEm::CDocGiaTreEm(){}
CDocGiaTreEm::~CDocGiaTreEm(){}