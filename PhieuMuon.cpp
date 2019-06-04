#include "PhieuMuon.h"


Date& PhieuMuon::tinhNgayTra() {
	switch (xNgayMuon.nThang)
	{
	case 1: case 3: case 5: case 7: case 8:case 10: case 12: // nhung thang co 31 ngay
	{
		xNgayTra.nNgay = xNgayMuon.nNgay + 7;
		if (xNgayTra.nNgay > 7)
		{
			xNgayTra.nNgay = xNgayTra.nNgay - 31;
			xNgayTra.nThang++;
		}
		if (xNgayTra.nThang > 12)
		{
			xNgayTra.nThang = 1;
			xNgayTra.nNam++;
		}
	}

	case 4: case 6: case 9: case 11:
	{
		xNgayTra.nNgay = xNgayMuon.nNgay + 7;
		if (xNgayTra.nNgay > 30)
		{
			xNgayTra.nNgay = xNgayTra.nNgay - 30;
			xNgayTra.nThang++;
		}
	}
	default:
	{
		if ((xNgayMuon.nNam % 400 == 0) || (xNgayMuon.nNam % 4 == 0) && (xNgayMuon.nNam % 100 != 0))
		{
			xNgayTra.nNgay = xNgayMuon.nNgay + 7;
			if (xNgayTra.nNgay > 28)
			{
				xNgayTra.nNgay = xNgayTra.nNgay - 28;
				xNgayTra.nThang++;
			}
		}
		else // co 29 ngay
		{
			xNgayTra.nNgay = xNgayMuon.nNgay + 7;
			if (xNgayTra.nNgay > 29)
			{
				xNgayTra.nNgay = xNgayTra.nNgay - 29;
				xNgayTra.nThang++;
			}
		}
		break;
	}
	}
	return xNgayTra;
}

int PhieuMuon::getTrangThai()
{
	return this->nTrangThai;
}
void PhieuMuon::setTrangThai(int a)
{
	this->nTrangThai = a;
}
void PhieuMuon::setSach(Sach s)
{
	this->xSach = s;
}
void PhieuMuon::setBanDoc(BanDoc xBD)
{
	this->xBanDoc = xBD;
}

void PhieuMuon::outputPM() {
	cout << "<So phieu muon>:    " << this->nMaPM << endl;
	cout << "<Ma sach>:          " << this->xSach.getMaSach() << endl;
	cout << "<Ma ban doc>:       " << this->xBanDoc.getMaBD() << endl;
	cout << "<Ngay muon>:        "; this->xNgayMuon.xuatDate(); cout << endl;
	cout << "<Ngay tra>:         "; this->xNgayTra.xuatDate(); cout << endl;
	cout << "<Tinh trang>:       " << this->nTrangThai << endl;
	cout << "***********************************\n";
}
void PhieuMuon::writePM(ofstream &file)
{
	file << this->nTongPM << "\n" << this->nMaPM << "," << this->xBanDoc.sMaBD << "," <<
		this->xNgayMuon.nNgay << "," << this->xNgayMuon.nThang << "," << this->xNgayMuon.nNam << "," 
		<< this->xNgayTra.nNgay << "," << this->xNgayTra.nThang << "," << this->xNgayTra.nNam << "," <<
		this->nTrangThai << endl;

}
void PhieuMuon::readPM(ifstream &file)
{
	file >> this->nMaPM; file.ignore(1);
	rewind(stdin); getline(file, this->xBanDoc.sMaBD, ',');
	file >> this->xNgayMuon.nNgay; file.ignore(1);
	file >> this->xNgayMuon.nThang; file.ignore(1);
	file >> this->xNgayMuon.nNam; file.ignore(1);
	file >> this->xNgayTra.nNgay; file.ignore(1);
	file >> this->xNgayTra.nThang; file.ignore(1);
	file >> this->xNgayTra.nNam; file.ignore(1);
	file >> this->nTrangThai; file.ignore(1);
}