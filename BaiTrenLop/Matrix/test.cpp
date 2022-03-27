#include<iostream>
#include<vector>
#include<string>
using namespace std;
class NhanVien{
	protected: 
		string hoTen;
		float luong;
		public:
			virtual void Nhap(){
				rewind(stdin);
				cout<<"Ho ten: "; getline(cin, hoTen);
			};
			void xuat(){
				cout<<hoTen<<"\t";
			};
			virtual void tinhLuong() = 0;
};
class NhanVienvanPhong:	public NhanVien{
	private:
		float luongCoBan;
		int soNgayLamViec;
		public:
			void Nhap(){
				NhanVien::Nhap();
				cout<<"Luong CB: "; cin>> luongCoBan;
				cout<<"Ngay lam viec: "; cin>>soNgayLamViec;
			};
			void Xuat(){
				NhanVien::xuat();
				cout<<luongCoBan<<"\t"<<soNgayLamViec;
			};
			void TinhLuong(){
				luong = (luongCoBan/26)*soNgayLamViec;
			};
};
class NhanVienSx: public NhanVien{
	 	int soSanPham;
		float tienCong;
		public:
			void nhap(){
				NhanVien::Nhap();
				cout<<"So san pham: "; cin>>soSanPham;
				cout<<"Tien cong 1 SP: "; cin>>tienCong;	
			};
			void xuat(){
				NhanVien::xuat();
				cout<<soSanPham<<"\t"<<tienCong<<luong;
			};
};
class CongTy{
	private:
		vector<NhanVienvanPhong> NVVP;
		vector<NhanVienSx> NVSX;
		vector<NhanVien*> NV;
		
			public:
				void nhap(){
					// int n;
					// cout<<"Nhap so nhan vien van phong: "; cin>>n;
					// for(int i = 0; i < n; i++){
					// 	NhanVienvanPhong nv;
					// 	nv.Nhap();
					// 	NVVP.push_back(nv);
					// }
	
					int n;
					cout<<"So luong nhan vien: "; cin>>n;
					cout<<"Nhan vien van phong (1) ; Nhan vien san xuat (2)";
					int luaChon; cin>>luaChon;
					for(int i = 0; i < n; i++){
						NhanVien *nv;
						if(luaChon == 1){
							nv = new NhanVienvanPhong;
							nv -> Nhap();
							NV.push_back(nv);
						} else {
							nv = new NhanVienSx;
							nv -> Nhap();
							NV.push_back(nv);
						}
					}
				}
				void Xuat(){
					for(int i = 0; i < NVVP.size(); i++){
						NVVP.at(i).Xuat(); // NVVP[i].Xuat();
					}
				}
				void TinhLuong(){
					for(int i = 0; i < NVVP.size(); i++){
						NVVP.at(i).TinhLuong();
					}
				}
};
int main(){
	CongTy ct;
	ct.nhap();
	ct.Xuat();
	return 0;
}