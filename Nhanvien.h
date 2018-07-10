#ifndef NHANVIEN_H
#define NHANVIEN_H
#include <iostream>
#include <string.h>
using namespace std;

class Nhanvien
{
protected:
	string MaNV;
	string HoTen;
	string MasoThue;
public:
	Nhanvien():MaNV(""), HoTen(""), MasoThue(""){}
	Nhanvien(string a, string b, string c): MaNV(a), HoTen(b), MasoThue(c){}
	string getmanv()const
	{
		return this->MaNV;
	}
	string getten()const
	{
		return this->HoTen;
	}
	string getmasothue()const
	{
		return this->MasoThue;
	}
	virtual float TinhLuong()const{}
	virtual void Print()const{}
	friend ostream &operator <<(ostream &out, Nhanvien &a)
	{
		out<<a.MaNV<<' ';
		out<<a.HoTen<<' ';
		out<<a.MasoThue<<" \n";
		return out;
	}
	friend istream &operator >>(istream &in, Nhanvien &a)
	{
		cout<<"MaNV: "; in>>a.MaNV;
		cout<<"HoTen: "; cin.ignore(); getline(in, a.HoTen);
		cout<<"MasoThue: "; in>>a.MasoThue;
		return in;
	}
	~Nhanvien(){}

};
#endif