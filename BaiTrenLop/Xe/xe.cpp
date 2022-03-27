#include<iostream>
using namespace std;
class Xe{
    string maXe, mauXe, tocDo, nhanHieu;
    float gia;
    public:
        Xe(){
            maXe = '\0';
            mauXe = '\0';
            tocDo = '\0';
            nhanHieu = '\0';
            gia = 0;
        }
        ~Xe(){

        }
        friend istream &operator >> (istream &is, Xe &x){
            cout<<"Ma xe: "; is>>x.maXe;
            cout<<"Mau xe: "; is>>x.mauXe;
            cout<<"Toc do xe: "; is>>x.tocDo;
            cout<<"Nhan hieu xe: "; is>>x.nhanHieu;
            cout<<"Gia xe: "; is>>x.gia;
            return is;
        }
        friend ostream &operator >> (ostream &os, Xe &x){
            os<<x.maXe<<"\t"<<x.mauXe<<"\t"<<x.tocDo<<"\t"<<x.nhanHieu<<"\t"<<x.gia<<endl;
            return os;
        }
};
int main(){

}