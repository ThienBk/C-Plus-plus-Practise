#include <iostream>

using namespace std;
class Sinhvien{
		string masv, hoten, lop, khoa;
		public: 
			void Nhap(){
			fflush(stdin);
			cout<<"Nhap MSV: ";getline(cin,masv);
			cout<<"Nhap HOTEN: ";getline(cin,hoten);
			cout<<"Nhap LOP: ";getline(cin,lop);
			cout<<"Nhap Khoa: ";getline(cin,khoa);
			};
			
			void Xuat(){
			cout<<masv<<"\t"<<hoten<<"\t"<<lop<<"\t"<<khoa;
			};
			
			friend class Dangky;
};

class Monhoc{
		string mamon, tenmon;
		int sotiet;
		public:
			void Nhapm(){
			fflush(stdin);
			cout<<"Nhap MAMON: ";getline(cin,mamon);
			cout<<"Nhap TENMON: ";getline(cin,tenmon);
			cout<<"Nhap SOTIET: ";cin>>sotiet;
	}
			void Xuatm(){
			
			cout<<"\n"<<mamon<<"\t"<<tenmon<<"\t"<<sotiet;
		}
			friend class Dangky;
};

class Dangky{
	public:
			Sinhvien A;
			Monhoc B[10];
			int m;// so mon dang ky
			void Nhapdk();
			void Indk();
			
};

void Dangky::Nhapdk() {
			A.Nhap();// nhap thong tin 1 sinh vien
			cout<<"So mon dang ky??: "; cin>>m;
			for(int i=0;i<m;i++)
			{
				B[i].Nhapm() ;
			}
}

void Dangky::Indk(){
			A.Xuat();
			for(int i=0; i<m;i++)
			{
				B[i].Xuatm();
			}
}
int main(int argc, char** argv) {
	Dangky dn;
	dn.Nhapdk();
	dn.Indk();

	return 0;
}