#ifndef Sach_h
#define Sach_h
#include "Date.h"
class Date;
class Sach
{
private:
	string sMaSach;
	string sTuaDe;
	string sTacGia;
	string sNXB;
	float fTriGia;
	int nNamPhatHanh;
	int nSoTrang;
	Date xNgayNhapKho;
	int nTinhTrang;
public:
	friend Date;
	Sach()
	{
		this->sMaSach = "";
		this->sTuaDe = "";
		this->sTacGia = "";
		this->sNXB = "";
		this->fTriGia = 0.0;
		this->nNamPhatHanh = 0;
		this->nSoTrang = 0;
		this->nTinhTrang = 0;
	}
	Sach(string sMaSach)
	{
		this->sMaSach = "";
		this->sTuaDe = "";
		this->sTacGia = "";
		this->sNXB = "";
		this->fTriGia = 0.0;
		this->nNamPhatHanh = 0;
		this->nSoTrang = 0;
		this->nTinhTrang = 0;

	}

	Sach(string sMaSach, string sTuaDe, string sTacGia, string sNXB, float fTriGia, int nNamPhatHanh, int nSoTrang, int nNgay, int nThang, int nNam, int nTinhTrang) : xNgayNhapKho(nNgay, nThang, nNam)
	{
		this->sMaSach = sMaSach;
		this->sTuaDe = sTuaDe;
		this->sTacGia = sTacGia;
		this->sNXB = sNXB;
		this->fTriGia = fTriGia;
		this->nNamPhatHanh = nNamPhatHanh;
		this->nSoTrang = nSoTrang;
		this->nTinhTrang = nTinhTrang;
	}

	// get /set
	string getMaSach();
	string getTuaDe();
	string getTacGia();
	string getNXB();
	float getTriGia();
	int getNamPhatHanh();
	int getSoTrang();
	int getNgayNhapKho();
	int getThangNhapKho();
	int getNamNhapKho();
	int getTinhTrang();

	void setMaSach(string sMaSach);
	void setTuaDe(string sTuaDe);
	void setTacGia(string sTacGia);
	void setNXB(string sNXB);
	void setTriGia(float nTriGia);
	void setNamPhatHanh(int nNamPhatHanh);
	void setSoTrang(int nSoTrang);
	void setTinhTrang(int x);

	void XuatSach();
	void writeSach(ofstream &file);
	void readSach(ifstream &file);

	virtual ~Sach() {}
};
#endif // !Sach_h


