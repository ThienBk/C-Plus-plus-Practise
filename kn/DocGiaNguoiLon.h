#pragma once
#include<iostream>
using namespace std;
#include<string>
#include"DocGia.h"

class CDocGiaNguoiLon : public CDocGia{
private:
	string CMND;
public:
	void Input();
	void Output();
	int Tinh_Tien_Lam_The();

	CDocGiaNguoiLon();
	~CDocGiaNguoiLon();
};
