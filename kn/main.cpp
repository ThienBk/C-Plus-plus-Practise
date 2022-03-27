#include"ThuVien.h"
using namespace std;
int main(){
	CThuVien *x = new CThuVien;
	x->Input();
	x->Output();
	delete x;
	system("pause");
	return 0;
}