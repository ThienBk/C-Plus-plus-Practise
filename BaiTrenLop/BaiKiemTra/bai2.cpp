#include <iostream>
#include <string.h>
#include <conio.h>
#include<string>


using namespace std;

class PhieuBaoDiem;
class SinhVien
{
		private: 
		string MaSV,HoTen,Lop,Khoa;
		public: 
		void Nhap()
		{
			rewind(stdin);
			cout<<"Nhap Ma sinh vien: ";getline(cin,MaSV);
			cout<<"Nhap HOTEN: ";getline(cin,HoTen);
			cout<<"Nhap LOP: ";getline(cin,Lop);
			cout<<"Nhap Khoa: ";getline(cin,Khoa);
			
		}
		void Xuat()
		{
			cout<<"Ma sinh vien: "<<MaSV<<"\t"<<"\t"<<"Ten sinh vien: "<<HoTen<<endl;
			cout<<"Lop: "<<Lop<<"\t"<<"\t"<<"\t"<<"Khoa: "<<Khoa<<endl;
		}
		
		friend PhieuBaoDiem;		
};
class MonHoc
{
	private: 
	string MaMon,TenMon;
	int Tinchi;
	float Diem;
	public:
		void Nhap()
		{
			cout<<" Ma Mon: "; getline(cin,MaMon),
			cout<<" Ten Mon: "; getline(cin,TenMon);
			cout<<" So trinh: "; cin>>Tinchi;
			cout<<" Diem: "; cin>>Diem;
		}
		void Xuat()
		{
			cout<<MaMon<<"\t"<<TenMon<<"\t"<<Tinchi<<"\t"<<Diem<<endl;
		}
	
		friend PhieuBaoDiem;
};
class PhieuBaoDiem
{
	float DiemTB;
		public:
			SinhVien A;
			MonHoc B[10];
			int m;// so mon hoc dang ki
			
			void Nhap()
			{
				A.Nhap();
				cout<<" Nhap so mon : "; cin>>m;
				for(int i=0;i<m;i++)
				{
					cout<<"Mon["<<i+1<<"]:  "<<endl;
					B[i].Nhap();
				}	
			}
			void Xuat()
			{
				cout<<"\t"<<"\t"<<"\n Phieu Bao Diem"<<endl;
	
				A.Xuat();
				cout<<"Ten Mon"<<"\t"<<"So trinh"<<"\t"<<"Diem"<<endl;
				for(int i=0;i<m;i++)
				{
					B[i].Xuat();
				} 
			}		
};
void NhapBD(PhieuBaoDiem BD[], int n)
{
	for(int i = 0;i < n; i++)
	{
		cout<<"Phieu["<<i + 1<<"]: "<<endl;
		BD[i].Nhap();
	}
	
}
void InBD(PhieuBaoDiem BD[], int n)
{
	for(int i=0;i<n;i++)
	{
		BD[i].Xuat();
		cout<<"\n";
	}
}

int main()
{
	int n; 
	cout<<"Nhap so luong phieu: "; cin>>n;		
	PhieuBaoDiem *BD =new PhieuBaoDiem[n];
	NhapBD(BD,n);
	InBD(BD,n);
    return 0;
}
