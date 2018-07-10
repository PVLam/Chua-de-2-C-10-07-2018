#ifndef NVDACBIET_H
#define NVDACBIET_H
#include "Nhanvien.h"
#include "NVhoahong.h"

class NVdacbiet: public NVhoahong
{
	protected:
	int LuongCB;
public:
	NVdacbiet():NVhoahong(),LuongCB(0){}
	NVdacbiet(string a, string b, string c, int d, float e, int f): NVhoahong(a,b,c,d,e), LuongCB(f){}
	int getLuongcb()const
	{
		return this->LuongCB;
	}
	virtual float TinhLuong()const
	{
		return getLuongcb()*0.1 + gettong()*getphantram();
	}
	virtual void Print()const
	{
		cout<<getmanv()<<"\t";
		cout<<getten()<<"\t";
		cout<<getmasothue()<<"\t";
		cout<<TinhLuong()<<"\n";
	}
	friend ostream &operator <<(ostream &out, NVdacbiet &a)
	{
		out<<a.MaNV<<' ';
		out<<a.HoTen<<' ';
		out<<a.MasoThue<<' ';
		out<<a.Tongdoanhthu<<' ';
		out<<a.Phantram<<' ';
		out<<a.LuongCB<<" \n";
		return out;
	}
	friend istream &operator >>(istream &in, NVdacbiet &a)
	{
		cout<<"MaNV: "; in>>a.MaNV;
		cout<<"HoTen: "; cin.ignore(); getline(in, a.HoTen);
		cout<<"MasoThue: "; in>>a.MasoThue;
		cout<<"Tongdoanhthu: "; in>>a.Tongdoanhthu;
		cout<<"Phantram: "; in>>a.Phantram;
		cout<<"LuongCB: "; in>>a.LuongCB;
		return in;
	}
	~NVdacbiet(){}
};

#endif