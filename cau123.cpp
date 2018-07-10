#include "NVbienche.h"
#include "NVhoahong.h"
#include "NVdacbiet.h"
#include "Nhanvien.h"
#define MAX 5
#include <fstream>

int main()
{
	fstream fout("DSnhanvien.txt", ios::out);
	int n = 3;
	Nhanvien *tap[MAX];
	int chon;
	for(int i = 0; i<n; i++)
	{
		cout << "1. Nhap NVbienche. " << endl;
		cout << "2. Nhap NVhoahong. " << endl;
		cout << "3. Nhap NVdacbiet. " << endl;
		cin >> chon;
		if (chon == 1)
		{
			NVbienche *a = new NVbienche();
			cin >> *a; 
			tap[i] = a;
			fout<< *a;
		}else if (chon == 2)
		{
			NVhoahong *a = new NVhoahong();
			cin >> *a; 
			tap[i] = a;
			fout<< *a;
		}
		else if (chon == 3)
		{
			NVdacbiet *a = new NVdacbiet();
			cin >> *a; 
			tap[i] = a;
			fout<< *a;
		}
	}
	fout.close();
	for(int i = 0; i<n; i++)
	{
		tap[n]->Print();
	}
}