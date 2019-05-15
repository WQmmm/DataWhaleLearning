/////////main.cpp/////////

#include<stdio.h>
#include"Lstack.h"

int main()
{
	Cstack stack;
	int x;
	int y=1;
	printf("========================\n");
	printf("请选择所要进行的操作:\n1.元素进栈\n2.元素退栈\n3.查看栈中元素个数\n0.退出\n");
	printf("========================\n");
	while(y)
	{
        printf("请选择所要进行的操作:\n");
		scanf("%d",&x);
		switch(x)
		{
		case 0:
		     	y = 0;
				break;
		case 1:
		    	stack.head = stack.push(stack.head);
				break;
		case 2:
		 		stack.head = stack.pop(stack.head);
				break;
		case 3: 
				stack.display();
				break;
		default:
				printf("出入有误！请重新输入！\n");
		}
	}
    return 0;
}
