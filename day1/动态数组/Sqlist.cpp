///////////////Sqlist//////////////
#include"Sqlist.h"
#include<iostream>
using namespace std;

Sqlist::Sqlist()
{
	elem = (int*) calloc(Max,sizeof(int));
	length = 0;
	listsize = Max;
}

Sqlist::~Sqlist()
{
	free(elem);
	length = 0;
	listsize = 0;
}

void Sqlist::CreateList()
{
	 int n;
	 cin>>n;
	 cout<<"请依次输入"<<n<<"个元素:"<<endl;
	 if(n > listsize)
			throw"参数非法";
	 for(int i = 1; i <= n; i++)
	 {
		 cin>>elem[i-1];
	 }
	 length = n;
}

void Sqlist::Insert(int i, T e)
{
	if(length >= listsize)
		throw"上溢";
	if(i < 0 || i > length+1)
		throw"插入位置异常";
	for(int j = length; j > i; j--)
	{
		elem[j] = elem[j-1];
	}
	elem[i] = e;
	length++;
}

T Sqlist::Delete(int i)
{
	T x;
	if(length == 0)
		throw"下溢";
	if(i < 1 || i > length+1)
		throw"插入位置异常";
	x = elem[i-1];
	for(int j = i; j < length; j++)
		elem[j-1] = elem[j];
	length--;
	return x;
}

void Sqlist::Update(int i, int data)
{
	if(i < 1 || i > length+1)
		throw"更新位置异常";
	elem[i-1] = data;
}

void Sqlist::display()
{
	for(int i = 0; i < length; i++)
		cout<<elem[i]<<"  ";
	cout<<endl;
}
