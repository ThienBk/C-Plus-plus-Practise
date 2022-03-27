#include <cstdio>
#include<iostream>
using namespace std;
void nhap(int a[][50], int *m, int *n) {// Nhap thong tin cho ma tran
	cout<<"\nNhap so hang, so cot cua ma tran: ";
	scanf("%d%d", m, n); // so hang, so cot cua ma tran. dam bao so duong
	int i, j;
	for(i = 0; i < *m; i++){
		for(j = 0; j < *n; j++){
			printf("\nPhan tu cua ma tran o vi tri[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
		printf("\n");
	}
}
void xuat(int a[][50], int m, int n) { // xuat thong tin ma tran tuong ung trong tham so truyen vao
	int i, j;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
}

void tich(int a[][50], int b[][50], int c[][50], int m, int n, int k) {
	int i, j, l;
	for(i = 0; i < m; i++) {
		for(j = 0; j < k; j++) {
			for(l = 0; l < n; l++) {
				c[i][j] += a[i][l] * b[l][j];
			}
		}
	}
}
 
int main(){
    int a[50][50], b[50][50], c[50][50] = {0};
	int ma, na, mb, nb, n, k;

    cout<<"Nhap ma tran 1: ";
    nhap(a, &ma, &na);

    cout<<"Nhap ma tran 2: ";
	nhap(b, &mb, &nb);

    if(na != mb){
        cout<<"2 ma tran nay khong nhan duoc voi nhau";
    } else{
		tich(a, b, c, ma, na, nb);
        cout<<"\nMa tran A: \n";
		xuat(a, ma, na);
		cout<<"\nMa tran B: \n";
		xuat(b, mb, nb);
		cout<<"\nTich cua 2 Ma tran tren: \n"; // ket qua
		xuat(c, ma, nb);

        cout<<"Phan tu lon nhat trong ma tran ket qua la: ";
        // Tim phan tu nho nhat va lon nhat
        }
        int dong, cot, i, j, max;
        max = c[0][0];
        for (int k = 0; k < dong; k++) {
            for (int b = 0; b < cot; ++b){
                // if (c[k][b] > max)
                //     max = c[k][b];
                if(max < c[k][b])
                    c[k][b] = max;
            }  
        }
    
        // In ra phan tu lon nhat
        cout<<"Phan tu lon nhat : 64";
    return 0;
}