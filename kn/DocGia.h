	#pragma once // tránh tình trạng đụng độ thư viện - trong mọi tình huống chỉ có 1 thư viện 
	#include<iostream>
	using namespace std;
	#include<string>

	class CDocGia // lớp cha 
	{
	protected:
		string hoten;
		string ngaylapthe; // dd/mm/yyyy
		int sothangcohieuluc;
		bool KT;// true : trẻ em, false: người lớn
	public:
		virtual void Input(); // phương thức ảo - nhập thông tin độc giả
		virtual void Output(); // phương thức ảo - xuất thông tin độc giả
		virtual int Tinh_Tien_Lam_The() = 0; // khai báo phương thức thuần ảo 

		/* GETTER_SETTER KT*/
		// trả về dữ liệu
		bool Getter_KT(){
			return KT;
		}
		// cập nhật dữ liệu
		void Setter_KT(bool kt){
			KT = kt;
		}
		CDocGia();
		~CDocGia();
	};