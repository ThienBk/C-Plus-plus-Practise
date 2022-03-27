#include <iostream>

using namespace std;

void nhapMang(int m[], int n){
	for(int i = 0 ; i < n; i++){
		cout << "Nhap mang vao phan tu cua mang o vi tri ["<<i<<"] = "; cin >> m[i];
	}
}
void xuat(int m[], int n) {
    for (int i = 0; i < n; i++)
        cout << m[i] << endl;
}
void Search(int m[], int n) {
	int k;
	cout << "Nhap phan tu muon tim kiem: ";
	cin >> k;
	bool check = false;
	for (int j = 0; j < n; j++) {
		if (m[j] == k) {
			cout<<"Tim thay phan tu o vi tri: " << j << endl;
			check = true;
		}
	}
	if(check != true){
		cout << "Khong tim thay phan tu trong mang";
	}
}
void xuatMang(int m[], int n){
	
}
int main() {
	int n;
	cout << "Nhap vao so luong phan tu cua mang: ";
	cin >> n;
	int m[n];
	nhapMang(m, n);
	Search(m, n);
	
    cout << "Xuat mang: "<<endl ;
    xuat(m, n);
    system("pause");
	return 0;
}
