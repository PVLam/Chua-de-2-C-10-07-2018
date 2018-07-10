#ifndef NVHOAHONG_H
#define NVHOAHONG_H
#include "Nhanvien.h"

class NVhoahong: public Nhanvien
{
protected:
	int Tongdoanhthu;
	float Phantram;
public:
	NVhoahong():Nhanvien(), Tongdoanhthu(0), Phantram(0.0){}
	NVhoahong(string a, string b, string c, int d, float e): Nhanvien(a,b,c), Tongdoanhthu(d), Phantram(e){}
	int gettong()const
	{
		return this->Tongdoanhthu;
	}
	float getphantram()const
	{
		return this->Phantram;
	}
	virtual float TinhLuong()const
	{
		return gettong()*getphantram();
	}
	virtual void Print()const
	{
		cout<<getmanv()<<"\t";
		cout<<getten()<<"\t";
		cout<<getmasothue()<<"\t";
		cout<<TinhLuong()<<"\n";
	}
	friend ostream &operator <<(ostream &out, NVhoahong &a)
	{
		out<<a.MaNV<<' ';
		out<<a.HoTen<<' ';
		out<<a.MasoThue<<' ';
		out<<a.Tongdoanhthu<<' ';
		out<<a.Phantram<<" \n";
		return out;
	}
	friend istream &operator >>(istream &in, NVhoahong &a)
	{
		cout<<"MaNV: "; in>>a.MaNV;
		cout<<"HoTen: "; cin.ignore(); getline(in, a.HoTen);
		cout<<"MasoThue: "; in>>a.MasoThue;
		cout<<"Tongdoanhthu: "; in>>a.Tongdoanhthu;
		cout<<"Phantram: "; in>>a.Phantram;
		return in;
	}
	~NVhoahong(){}

};
#endif