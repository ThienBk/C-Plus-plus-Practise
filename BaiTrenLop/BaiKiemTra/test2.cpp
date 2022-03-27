#include <iostream>
#include <vector>
#include <string>
using namespace std;

class DocGia

{
protected:
    string hoten;
    string ngaylamthe;
    int sothangcohieuluc;
    float tienlamthe;

public:
    DocGia()
    {
        this->hoten = "";
        this->ngaylamthe = "";
        this->sothangcohieuluc = 0;
        this->tienlamthe = 0.0;
    }

    virtual void nhap()
    {
        cout << "\nNhap ho ten doc gia: ";
        cin.ignore();
        getline(cin, this->hoten);
        cout << "\nNgay lam the: ";
        cin.ignore();
        getline(cin, this->ngaylamthe);
        cout << "\nNhap so thang co hieu luc: ";
        cin >> this->sothangcohieuluc;
    }

    virtual void xuat()
    {
        cout << "Ho ten: ";
        cout << this->hoten << endl;
        cout << "Ngay lam the: ";
        cout << this->ngaylamthe << endl;
        cout << "So thang co hieu luc: ";
        cout << this->sothangcohieuluc << endl;
    }

    virtual void tinhtienlamthe() = 0;
};
class 	CDocGiaTreEm : public DocGia{
private:
    string hotenNDD;

public:
    CDocGiaTreEm() : DocGia()
    {
        this->hotenNDD = "";

    }


    void nhap()
    {
        DocGia::nhap();
        cout << "\nNhap ho ten nguoi dai dien: ";
        cin >> this->hotenNDD;

    }

    void xuat()
    {
        cout << "Ho ten nguoi dai dien: ";
        cout << this->hotenNDD << endl;

        cout << "tien lam the : ";
        cout << this->tienlamthe << endl;
    }

    void tinhtienlamthe()
    {
        this->tienlamthe = this->sothangcohieuluc * 500;
    }
};
class CDocGiaNguoiLon : public DocGia

{
private:
    string CMND;

public:
    CDocGiaNguoiLon() : DocGia()
    {
        this->CMND = "";
    }

    void nhap()
    {
        CDocGiaNguoiLon::nhap();
        cout << "\nNhap CMND: ";
        cin >> this->CMND;

    }

    void xuat()
    {
        DocGia::xuat();
        cout << "\nChung minh nhan dan: ";
        cout << this->CMND << endl;

    }
    void tinhtienlamthe()
    {
        this->tienlamthe = this->sothangcohieuluc * 10000;
    }
};

class ThuVien
{
private:
    vector<ThuVien*>TV;
public:
    void nhap()
    {
        cout << "Nhap so doc gia: ";
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << "doc gia tre em (1), doc gia nguoi lon (2): ";
            int k;
            cin >> k;
            DocGia* dg;
            // Tùy vào người dùng chọn đối tượng nào để nhập
            if (k == 1) {
                dg = new CDocGiaTreEm;
                dg->nhap();
                TV.push_back(dg);
            }
            else {
                dg = new CDocGiaNguoiLon;
                dg->nhap(); // ta sẽ sử dụng hàm nhập của đối tượng mà người dùng chọn
                TV.push_back(dg);
            }
        }
    }

    void xuat()
    {
        cout << "Nhan vien tre em:" << endl;
        for (int i = 0; i < this->TV.size(); i++)
        {
            cout << "STT:" << i + 1 << endl;
            this->TV.at(i)->xuat(); // tùy vào đối tượng là gì mà phương thức xuất sẽ được gọi theo đúng đối tượng đó
        }
    }

    void tinhtienlamthe()
    {
        for (int i = 0; i < this->NV.size(); i++)
            this->NV.at(i)->tinhtienlamthe(); // tùy vào đối tượng là gì mà phương thức tính lương sẽ được gọi theo đúng đối tượng đó
    }
};

int main()
{
    ThuVien tv;
    tv.nhap();
    tv.tinhtienlamthe();
    tv.xuat();
    return 0;
}