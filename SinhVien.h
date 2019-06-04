#pragma once
#include "BanDoc.h"
class SinhVien :
	public BanDoc
{
	int nKhoaHoc;
	int nLoaiBD;
public:
	SinhVien()
	{
		nKhoaHoc = 0;
		this->nLoaiBD = 2;
	}
	SinhVien(string sMaBD, string sHoTen, string sKhoa, int nKhoaHoc) :BanDoc(sMaBD, sHoTen, sKhoa)
	{
		this->nKhoaHoc = nKhoaHoc;
		this->nLoaiBD = 2;
	}
	SinhVien(string sMaBD, string sHoTen, string sKhoa, int nNgay, int nThang, int nNam, int nKhoaHoc) :BanDoc(sMaBD, sHoTen, sKhoa, nNgay, nThang, nNam)
	{
		this->nKhoaHoc = nKhoaHoc;
		this->nLoaiBD = 2;
	}


	void ouputBanDoc(); //ham xuat ban doc ra man hinh cho giao vien va sinh vien
	void ReadBanDoc(ifstream &file); //ham doc ds ban doc tu file
	void WriteBanDoc(ofstream &file); //ham ghi ds ban doc tu file

	virtual ~SinhVien(){}
};

