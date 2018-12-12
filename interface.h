#ifndef _INTERFACE_
#define _INFERFACE
#include "people.h"
const int N = 3;
class Interface
{
protected:
	Student st[N];
	int numOfSt;
	Graduate gr[N];
	int numOfGr;
	PostgraduateOnJob po[N];
	int numOfPo;
	Teacher te[N];
	int numOfTe;
public:
    Interface();
	void display();
	void run();
	void input();
	void output();

};
#endif

