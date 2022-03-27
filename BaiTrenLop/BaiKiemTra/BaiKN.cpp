#include<iostream>
#include<vector>
#include<string>
using namespace std;
class DocGia{
    protected:
        int the;
        string hoTen;
        int ngayLapThe;
        int soThangHieuLucThe;
            public:
                virtual void Nhap(){
                    cout<<"Nhap vao loai the: "<< endl;
                }
                virtual void Xuat(){
                    cout<<the<<"\t";
                }
                virtual void tienLamThe() = 0;
};
class The: public DocGia {
    private: 
        vector<TreEm>TE;
        vector<NguoiLon>NL;
        vector<DocGia*> DG;
            virtual void Nhap(){
                int n;
                cout<<"Nhap vao loai doc gia: "; cin >> n;
                cout<<"Doc gia la tre em (1); Doc gia la nguoi lon (2)";
                int luaChon; cin>>luaChon;
                for(int i = 0; i < n; i++){
                    DocGia *docgia;
                    if(luaChon == 1){
                        docgia = new TreEm;
                        docgia -> Nhap();
                        TE.push_back(docgia);
                    } else {
                        docgia = new NguoiLon;
                        docgia -> Nhap();
                        NL.push_back(docgia);
                    }
                }
                void Xuat(){
                    for(int i = 0; i < TE.size(); i++){
                        TE[i].Xuat();
                    }
                }
                void tienLamThe(){
                    for(int i = 0; i < TE.size(); i++){
                        TE[i].tienLamThe();
                    }
                }
                cout<<"Nhap ho va ten the doc gia: "; getline(cin, hoTen);
                cout<<"Nhap ngay lap the: "; cin >> ngayLapThe;
                cout<<"Nhap thoi gian hieu luc cua the: "; cin >> soThangHieuLucThe;
            }
            virtual void Xuat(){
                cout << hoTen << "\n" << ngayLapThe << "\n" << soThangHieuLucThe;
            }
};
class TreEm : public DocGia{ 
    private: 
        string tenNguoiDaiDien;
        int tienTheTreEm;
        public: 
            virtual void Nhap(){
                cout<<"Nhap ten nguoi dai dien cho tre: "; getline(cin, tenNguoiDaiDien);
            }
            virtual void Xuat(){
                DocGia::Xuat();
                cout<<"Nguoi dai dien cho tre la: " << tenNguoiDaiDien << tienTheTreEm;
            }
            virtual void tienLamThe(){
                tienTheTreEm = soThangHieuLucThe * 5000;
                cout<<"Tien lam the cho tre em la: " << tienTheTreEm;
            }
};
class NguoiLon : public DocGia{
    private:
        int CMND;
        int tienTheNguoiLon;
        public:
            virtual void Nhap(){
                cout<<"Nhap ma so CMND: "; cin>>CMND;
            }
            virtual void Xuat(){
                tienTheNguoiLon = soThangHieuLucThe * 10000;
                cout<<"Tien lam the cho nguoi lon la: " << tienTheNguoiLon;
            }
};
int main(){
    

    return 0;
}