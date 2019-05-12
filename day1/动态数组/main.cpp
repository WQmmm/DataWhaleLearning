///////////////main.cpp/////////////////
#include"Sqlist.h"
#include<iostream>
using namespace std;

int main()
{
	Sqlist L;
	int option;
	int i = 1;
	cout<<"初始化!!!!!!!!!!!!"<<endl;
	L.CreateList();
	cout<<"初始化成功!"<<endl;
	while(i)
	{
		cout<<"请选择要进行的操作：1.插入数据  2.删除数据  3.更新数据  4.输出所有元素  0.退出"<<endl;
		cin>>option;
		switch(option)
		{
			case 1:
				int local1;
				T e1;
				cout<<"请输入要插入的位置以及数据:";
				cin>>local1>>e1;
				L.Insert(local1, e1);
				break;
			case 2:
				int local2;
				cout<<"请输入要删除的位置:";
				cin>>local2;
				L.Delete(local2);
				break;
			case 3:
				int local3;
				T e2;
				cout<<"请输入要更新的位置以及更新的数据:";
				cin>>local3>>e2;
				L.Update(local3, e2);
				break;
			case 4:L.display(); break;
			case 0: i = 0; break;
			default:cout<<"输入有误!"<<endl; break;
		}
	}
	return 0;
}
