#pragma once
#include<iostream>
using namespace std;
#include<string>
#include"DocGia.h" // gọi lại lớp độc giả bên file DocGia.h

// lớp con CDocGiaTreEm kế thừa lại lớp cha CDocGia
class CDocGiaTreEm : public CDocGia{
    private:
        string hotenNDD;
    public:
        void Input();
        void Output();
        int Tinh_Tien_Lam_The(); // phương thức tính tiền làm thẻ của độc giả trẻ em

        CDocGiaTreEm();
        ~CDocGiaTreEm();
};
