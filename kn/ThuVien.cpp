#include "ThuVien.h"
// phương thức nhập thông tin các loại độc giả
void CThuVien::Input(){
	int luachon;
	while(true){
		system("cls"); // xóa hết các thứ có trong màn hình console 
		cout << "\n\n\t\t ============ THU VIEN X ============";
		cout << "\n\t 1. Doc gia tre em";
		cout << "\n\t 2. Doc gia nguoi lon";
		cout << "\n\t 0. Thoat";
		cout << "\n\n\t\t ============     END    ============";

		cout << "\nNhap lua chon: ";
		cin >> luachon;

		CDocGia *x; // khai báo con trỏ lớp cha 
		if (luachon == 1){
			x = new CDocGiaTreEm; 
			cout << "\n\n\t\t NHAP THONG TIN DOC GIA\n";
			x->Input();
			x->Setter_KT(true); //  độc giả trẻ em
			ds_docgia.push_back(x); // thêm 1 đối tượng con vào mảng
		}
		else if (luachon == 2){
			x = new CDocGiaNguoiLon; 
			cout << "\n\n\t\t NHAP THONG TIN DOC GIA\n";
			x->Input();
			x->Setter_KT(false); // này là độc giả người lớn
			ds_docgia.push_back(x); // thêm 1 đối tượng con vào mảng độc giả
		}
		else if (luachon == 0){
			break;
		}
		else{
			cout << "\nLua chon khong hop le. Xin kiem tra lai";
			system("pause");
		}
	}
}
// phương thức xuất thông tin
void CThuVien::Output(){
	cout << "\n\n\t\t ===== DANH SACH DOC GIA =====\n";
	// xuất danh sách thông tin độc giả
	for (int i = 0; i < ds_docgia.size(); i++){
		if (ds_docgia[i]->Getter_KT() == true){
			cout << "\n\n\t\t THONG TIN DOC GIA TRE EM THU " << i + 1;
			ds_docgia[i]->Output(); // xuất ra thông tin độc giả thứ i
		}
		else{
			cout << "\n\n\t\t THONG TIN DOC GIA NGUOI LON THU " << i + 1;
			ds_docgia[i]->Output(); // xuất ra thông tin độc giả thứ i
		}	
	}
}

CThuVien::CThuVien(){}
CThuVien::~CThuVien(){}