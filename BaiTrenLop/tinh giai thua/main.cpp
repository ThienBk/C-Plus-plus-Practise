#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n;
	cout << "Nhap so n: ";
	cin >> n;
	int giaiThua = 1;
		if(n > 0){
			for(size_t i = n; i >= 1; i--){
				giaiThua *= i;
			}
		}
		cout<< n << "! = " << giaiThua << endl;
	return 0;
}
