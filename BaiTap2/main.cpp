#include <iostream>
using namespace std;
class phanso
{
private:
    double a;
    double b;
public:
    void nhapsl()
    {
        cout << "\n nhap tu so :"; cin >> a;
        cout << " nhap mau so :"; cin >> b;
    }
    void insl()
    {
        cout << " " << a << "/" << b;
    }
    phanso cong(phanso p2)
    {
        phanso p;
        p.a = p2.b + p2.a;
        p.b = p2.b;
        return p;
    }
    phanso tru(phanso p2)
    {
        phanso p;
        p.a = p2.b - p2.a;
        p.b = p2.b;
        return p;
    }
    phanso nhan(phanso p2)
    {
        phanso p;
        p.a = a * p2.a;
        p.b = b * p2.b;
        return p;
    }
    phanso chia(phanso p2)
    {
        phanso p;
        p.a = a * p2.b;
        p.b = b * p2.b;
        return p;
    }
};
int main()
{
    phanso p, p1, p2;;
    cout << "Nhap vao so thu nhat: "; p1.nhapsl();
    cout << "\nNhap vao so thu hai: "; p2.nhapsl();
  cout << "\nTong phan so la:";
    p = p1.cong(p2); p.insl();
  cout << "\nHieu phan so la:";
    p = p1.tru(p2); p.insl();
  cout << "\nTich phan so la:";
    p = p1.nhan(p2); p.insl();
  cout << "\nThuong phan so la:";
    p = p1.chia(p2); p.insl();


    cout << "\n\n";
    system("pause");
}

