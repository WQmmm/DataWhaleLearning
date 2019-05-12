/////////////Sqlist.h///////////////
#include<iostream>
#define Max 99              //数组的默认大小为99
using namespace std;


typedef int T;

class Sqlist
{
private:
	T* elem;
	int length;
	int listsize;
public:
	Sqlist();
	~Sqlist();
	void CreateList();
	void Insert(int i, T e);
	T Delete(int i);
	void Update(int i, T e);
	void display();
};
