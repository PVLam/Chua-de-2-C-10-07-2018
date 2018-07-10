#ifndef NVBIENCHE_H
#define NVBIENCHE_H
#include "Nhanvien.h"

class NVbienche: public Nhanvien
{
protected:
	int LuongCB;
public:
	NVbienche():Nhanvien(), LuongCB(0){}
	NVbienche(string a, string b, string c, int d): Nhanvien(a,b,c), LuongCB(d){}
	int getluongcb()const
	{
		return this->LuongCB;
	}
	virtual float TinhLuong()const
	{
		return getluongcb();
	}
	virtual void Print()const
	{
		cout<<getmanv()<<"\t";
		cout<<getten()<<"\t";
		cout<<getmasothue()<<"\t";
		cout<<TinhLuong()<<"\n";
	}
	friend ostream &operator <<(ostream &out, NVbienche &a)
	{
		out<<a.MaNV<<' ';
		out<<a.HoTen<<' ';
		out<<a.MasoThue<<' ';
		out<<a.LuongCB<<" \n";
		return out;
	}
	friend istream &operator >>(istream &in, NVbienche &a)
	{
		cout<<"MaNV: "; in>>a.MaNV;
		cout<<"HoTen: "; cin.ignore(); getline(in, a.HoTen);
		cout<<"MasoThue: "; in>>a.MasoThue;
		cout<<"LuongCB: "; in>>a.LuongCB;
		return in;
	}
	~NVbienche(){}

};
#endif