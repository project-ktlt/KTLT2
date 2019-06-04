#pragma once
#include"BanDoc.h"
#include"Sach.h"


class BanDoc;
class Sach;
class PhieuMuon
{
	BanDoc xBanDoc;
	Sach xSach;
	Date xNgayMuon, xNgayTra;
	static int nTongPM;
	int nMaPM;
	int nTrangThai;
public:
	friend Date;
	friend BanDoc;
	friend Sach;
	string getMaBanDoc()
	{
		return this->xBanDoc.getMaBD();
	}
	string getMaSach() {
		return this->xSach.getMaSach();
	}
	Date getNgayMuon() {
		return this->xNgayMuon;
	}
	Date getNgayTra() {
		return this->xNgayTra;
	}
	int getMaPM() {
		return this->nMaPM;
	}
	static int getTongPM()
	{
		return nTongPM;
	}
	int getTrangThai();
	void setTrangThai(int a);
	void setSach(Sach s);
	void setBanDoc(BanDoc xBD);

	PhieuMuon()
	{
		this->nTongPM++;
		this->nMaPM = nTongPM;
		this->nTrangThai = 1;
		this->xNgayTra = tinhNgayTra();
	}
	PhieuMuon(string sMaBD, string sMaSach) : xBanDoc(sMaBD), xSach(sMaSach)
	{
		this->nTongPM++;
		this->nMaPM = nTongPM;
		this->nTrangThai = 1;
		this->xNgayTra = tinhNgayTra();
	}
	PhieuMuon(int nMaPM, string sMaBD, string sMaSach, int a, int b, int c, int d, int e, int f) :xBanDoc(sMaBD), xSach(sMaSach), xNgayMuon(a, b, c), xNgayTra(d, e, f)
	{
		this->nTongPM++;
		this->nMaPM = nTongPM;
		this->nTrangThai = nTrangThai;
		this->xNgayTra = tinhNgayTra();
	}
	Date &tinhNgayTra();
	void outputPM();
	void writePM(ofstream &file);
	void readPM(ifstream &file);

	virtual ~PhieuMuon() {}
};

