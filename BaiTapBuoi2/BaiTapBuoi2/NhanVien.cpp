#include<iostream>

using namespace std;

class Nhanvien {
	string mnv;
	string hoten;
	int tuoi;
	float luongcb;

public: 

	friend istream &operator >> (istream &is, Nhanvien &n) {
		cout << "Nhap ma nhan vien: "; cin >> n.mnv;
		cout << "Nhap ho ten nhan vien: "; cin >> n.hoten; 
		cout << "Nhap tuoi: "; cin >> n.tuoi;
		cout << "Nhap luong: "; cin >> n.luongcb;
			
		return is;
	}
	friend ostream &operator >>(ostream &os, Nhanvien &n) {
		cout << n.mnv << "\t" << n.hoten << "\t" << n.tuoi << "\t" << n.luongcb;
		return os;
	}
	int gettuoi() {
		return tuoi;
	}
};

int main() {
	Nhanvien nv[100];
	int n;
	cout << "Nhap so luong nhan vien: "; cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "\nNhan vien thu " << i + 1<< endl; cin >> nv[i];
	}
	Nhanvien tg;
	for (size_t i = 0; i < n; i++)
	{
		for (int j = j + 1; j < n; j++) {
			if (nv[i].gettuoi() < nv[j].gettuoi())
				tg = nv[i];
				nv[j] = nv[j];
				nv[j] = tg;
		}
	}	
}
