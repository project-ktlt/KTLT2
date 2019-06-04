#pragma once
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Admin
{
	string sUser, sPass;
public:
	Admin()
	{
		sUser = "";
		sPass = "";
	}
	Admin(string sUser, string sPass)
	{
		this->sPass = sPass;
		this->sUser = sUser;
	}

	string getUser();
	string getPass();
	void setUser(string sUser);
	void setPass(string sPass);

	void readAdmin(ifstream &fin);
	void writeAdmin(ofstream &fout);
	friend ostream& operator <<(ostream &os, Admin &Ad);

	~Admin() {}
};

