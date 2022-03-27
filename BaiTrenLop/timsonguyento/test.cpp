#include <iostream>
#include <math.h>
using namespace std;

void nhap(int a[], int &n){
    for (int i=0; i<n; i++)
    {
        cout<<"Nhap vao phan tu cua mang o vi tri["<<i<<"]= "; cin>> a[i];
    }
}
void xuat(int a[], int n){
    for (int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}
int ktnt(int x){
    if (x<2) 
        return 0;
    for (int i = 2; i<= sqrt(x); i++) 
        if (x%i == 0) 
            return 0;
    return 1;
}
int lietkent(int a[], int n){
    for (int i = 0; i < n; i++)
        if (ktnt(a[i])) 
    cout << a[i] <<" ";
}
int main(){
    int a[100], n, m;
    cout<<"Nhap so luong phan tu cua mang: "; cin>>n;
    nhap(a,n);
    cout<<"cac phan tu mang A la:\n";
    xuat(a,n);
    cout<<endl;
    cout<<"Cac so nguyen to trong mang: ";
    lietkent(a,n);

    return 0;
}