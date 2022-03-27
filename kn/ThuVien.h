#pragma once
#include"DocGiaTreEm.h"
#include"DocGiaNguoiLon.h"
#include<vector>
class CThuVien{
    private:
        vector<CDocGia *> ds_docgia; // khai báo mảng 1 chiều chứa lớp cha
    public:
        void Input();
        void Output();

        CThuVien();
        ~CThuVien();
};
