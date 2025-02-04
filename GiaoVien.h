#pragma once
#include "BanDoc.h"
class GiaoVien :
	public BanDoc
{
private:
	string sDiaChi;
	string sSoDT;
	int nLoaiBD;
public:
	GiaoVien()
	{
		this->sDiaChi = "";
		this->sSoDT = "";
		this->nLoaiBD = 1;
	}
	GiaoVien(string sMaBD, string sHoTen, string sKhoa, string sDiaChi, string sSoDT) :BanDoc(sMaBD, sHoTen, sKhoa)
	{
		this->nLoaiBD = 1;
		this->sDiaChi = sDiaChi;
		this->sSoDT = sSoDT;
	}
	GiaoVien(string sMaBD, string sHoTen, string sKhoa, int nNgay, int nThang, int nNam, string sDiaChi, string sSoDT) :BanDoc(sMaBD, sHoTen, sKhoa, nNgay, nThang, nNam)
	{
		this->nLoaiBD = 1;
		this->sDiaChi = sDiaChi;
		this->sSoDT = sSoDT;
	}
	void ouputBanDoc();
	void ReadBanDoc(ifstream &file);
	void WriteBanDoc(ofstream &file);

	virtual ~GiaoVien() {}
};

