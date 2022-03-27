#include <iostream>
#include <math.h>
using namespace std;

void nhap(int a[], int &n){
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap vao phan tu cua mang o vi tri["<<i<<"]= "; cin>> a[i];
    }
}
void xuat(int a[], int n){
    for (int i = 0; i<n; i++)
    {
        cout << a[i] << " ";
    }
}
// void viTriTrongMang(int a[], int n){
//     int k;
//     bool check = false;
//     for (int j = 0; j < n; j++) {
// 		if (a[j] == k) {
// 			cout<<"Tim thay phan tu o vi tri: " << j << endl;
// 			check = true;
// 		}
// 	}
// }
int checknt(int x){
    if (x < 2) 
        return 0;
    for (int i = 2; i <= sqrt(x); i++) 
        if (x %i == 0) 
            return 0;
    return 1;
}
int soNguyenTo(int a[], int n){
    for (int i = 0; i < n; i++)
        if (checknt(a[i])) 
        cout << a[i] << " " << "[" << i << "]" << "; ";
}
int main(){
    int a[100], n, m;
    cout<<"Nhap so luong phan tu cua mang: "; cin>>n;
    nhap(a, n);
    cout<<"Cac phan tu cua mang la: ";
    xuat(a, n);
    cout<<endl;
    cout<<"Cac so nguyen to trong mang la: ";
    soNguyenTo(a, n);
    return 0;
}