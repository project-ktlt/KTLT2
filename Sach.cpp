#include "Sach.h"



string Sach::getMaSach() {
	return this->sMaSach;
}
string Sach::getTuaDe() {
	return this->sTuaDe;
}
string Sach::getTacGia() {
	return this->sTacGia;
}
string Sach::getNXB() {
	return this->sNXB;
}
float Sach::getTriGia() {
	return this->fTriGia;
}
int Sach::getNamPhatHanh() {
	return this->nNamPhatHanh;
}
int Sach::getSoTrang() {
	return this->nSoTrang;
}
int Sach::getNgayNhapKho() {
	return this->xNgayNhapKho.nNgay;
}
int Sach::getThangNhapKho() {
	return this->xNgayNhapKho.nThang;
}
int Sach::getNamNhapKho() {
	return this->xNgayNhapKho.nNam;
}
int Sach::getTinhTrang() {
	return this->nTinhTrang;
}

void Sach::setMaSach(string sMaSach) {
	this->sMaSach = sMaSach;
}
void Sach::setTuaDe(string sTuaDe) {
	this->sTuaDe = sTuaDe;
}
void Sach::setTacGia(string sTacGia) {
	this->sTacGia = sTacGia;
}
void Sach::setNXB(string sNXB) {
	this->sNXB = sNXB;
}
void Sach::setTriGia(float fTriGia) {
	this->fTriGia = fTriGia;
}
void Sach::setNamPhatHanh(int nNamPhatHanh) {
	this->nNamPhatHanh = nNamPhatHanh;
}
void Sach::setSoTrang(int nSoTrang)
{
	this->nSoTrang = nSoTrang;
}
void Sach::setTinhTrang(int a) {
	this->nTinhTrang = a;
}

void Sach::XuatSach() 
{
	cout << "Ma sach:       " << this->sMaSach << endl;
	cout << "Tieu de:       " << this->sTuaDe << endl;
	cout << "Tac gia:       " << this->sTacGia << endl;
	cout << "NXB:           " << this->sNXB << endl;
	cout << "Tri gia:       " << this->fTriGia << " VND" << endl;
	cout << "Nam phat hanh: " << this->nNamPhatHanh << endl;
	cout << "Ngay nhap kho: ";
	this->xNgayNhapKho.xuatDate();
	cout << endl;
	cout << "*********************************\n";
}

void Sach::writeSach(ofstream &file)
{
	file << this->sMaSach << "," << this->sTuaDe << "," << this->sTacGia << "," <<
		this->sNXB << "," << this->fTriGia << "," << this->nNamPhatHanh << ","
		<< this->nSoTrang << "," << this->xNgayNhapKho.nNgay << "," << this->xNgayNhapKho.nThang << "," <<
		this->xNgayNhapKho.nNam << "," << this->nTinhTrang << endl;
}
void Sach::readSach(ifstream &file)
{
	rewind(stdin); getline(file, this->sMaSach, ',');
	rewind(stdin); getline(file, this->sTuaDe, ',');
	rewind(stdin); getline(file, this->sTacGia, ',');
	rewind(stdin); getline(file, this->sNXB, ',');
	file >> this->fTriGia; file.ignore(1);
	file >> this->nNamPhatHanh; file.ignore(1);
	file >> this->nSoTrang; file.ignore(1);
	file >> this->xNgayNhapKho.nNgay; file.ignore(1);
	file >> this->xNgayNhapKho.nThang; file.ignore(1);
	file >> this->xNgayNhapKho.nNam; file.ignore(1);
	file >> this->nTinhTrang; file.ignore(1);
}