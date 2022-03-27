e{
    string MaTaiNghe, TenTaiNghe, NuocSX;
    int Dongia, Soluong;
    int Thanhtien = Soluong * Dongia;
};
void nhapMang(int m[], int n){
	for(int i = 0 ; i < n; i++){
		cout << "Nhap vao so luong tai nghe: "; cin >> m[i];
	}
}
void xuat(int m[], int n) {
    for (int i = 0; i < n; i++)
        cout << m[i] << endl;
}