// softtest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CLong
{
private:
	int feet;
	double inch;
public:
	CLong()
	{
		feet = 0;
		inch = 0;
	}
	void setvalue(double meter)
	{
		feet = 3.2808*meter;
		inch = (3.2808*meter - feet) * 12;
	}
	void add(int ft, double in)
	{
		feet += ft;
		inch += in;
		if (inch > 11)
		{
			feet += inch / 12;
			inch -= (int)(inch / 12) * 12;
		}
	}
	void display()
	{
		cout << "feet=" << feet << "  inch=" << inch << endl;
	}
};
int main()
{
	CLong ot;
	ot.setvalue(10);
	ot.display();
	ot.add(2, 24.1);
	ot.display();
	return 0;
}

