#include "SinhVien.h"


void SinhVien::ouputBanDoc()
{
	cout << "Loai ban doc: " << this->nLoaiBD << endl;
	BanDoc::xuatBD();
	cout << "Khoa hoc: " << this->nKhoaHoc << endl;
	cout << "****************************\n";
}
void SinhVien::ReadBanDoc(ifstream &file)
{
	rewind(stdin); getline(file, this->sMaBD, ',');
	rewind(stdin); getline(file, this->sHoTen, ',');
	rewind(stdin); getline(file, this->sKhoa, ',');
	file >> this->xNgay.nNgay; file.ignore(1);
	file >> this->xNgay.nThang; file.ignore(1);
	file >> this->xNgay.nNam; file.ignore(1);
	file >> this->nKhoaHoc; file.ignore(1);

}
void SinhVien::WriteBanDoc(ofstream &file)
{
	file << this->nLoaiBD << "," << this->sMaBD << "," << this->sHoTen << "," << this->sKhoa << ","
		<< this->xNgay.nNgay << "," << this->xNgay.nThang << "," << this->xNgay.nNam << "," << this->nKhoaHoc << endl;
}