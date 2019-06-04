#include "GiaoVien.h"


void GiaoVien::ouputBanDoc()
{
	cout << "Loai ban doc: " << this->nLoaiBD << endl;
	BanDoc::xuatBD();
	cout << "Dia Chi: " << this->sDiaChi << endl;
	cout << "So Dien Thoai: " << this->sSoDT << endl;
	cout << "****************************\n";
}
void GiaoVien::ReadBanDoc(ifstream &file)
{
	rewind(stdin); getline(file, this->sMaBD, ',');
	rewind(stdin); getline(file, this->sHoTen, ',');
	rewind(stdin); getline(file, this->sKhoa, ',');
	file >> this->xNgay.nNgay; file.ignore(1);
	file >> this->xNgay.nThang; file.ignore(1);
	file >> this->xNgay.nNam; file.ignore(1);
	rewind(stdin); getline(file, this->sDiaChi, ',');
	rewind(stdin); getline(file, this->sSoDT, '\n' );
}
void GiaoVien::WriteBanDoc(ofstream &file)
{
	file << this->nLoaiBD << "," << this->sMaBD << "," << this->sHoTen << "," << this->sKhoa << ","
		<< this->xNgay.nNgay << "," << this->xNgay.nThang << "," << this->xNgay.nNam << "," << this->sDiaChi << "," << this->sSoDT << endl;
}