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
            // T??y v??o ng?????i d??ng ch???n ?????i t?????ng n??o ????? nh???p
            if (k == 1) {
                dg = new CDocGiaTreEm;
                dg->nhap();
                TV.push_back(dg);
            }
            else {
                dg = new CDocGiaNguoiLon;
                dg->nhap(); // ta s??? s??? d???ng h??m nh???p c???a ?????i t?????ng m?? ng?????i d??ng ch???n
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
            this->TV.at(i)->xuat(); // t??y v??o ?????i t?????ng l?? g?? m?? ph????ng th???c xu???t s??? ???????c g???i theo ????ng ?????i t?????ng ????
        }
    }

    void tinhtienlamthe()
    {
        for (int i = 0; i < this->NV.size(); i++)
            this->NV.at(i)->tinhtienlamthe(); // t??y v??o ?????i t?????ng l?? g?? m?? ph????ng th???c t??nh l????ng s??? ???????c g???i theo ????ng ?????i t?????ng ????
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