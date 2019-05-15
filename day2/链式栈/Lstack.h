/////Lstack.cpp//////

#include"Lstack.h"
#include<stdio.h>

Cstack::Cstack()         //构造函数
{
	Node* head = new Node;
	head->val = 0;
	head->next = NULL;
	top = EMPTY;
}

bool Cstack::empty()const       //判断栈空函数
{
	if(top == EMPTY)
		return true;
	else
		return false;
}

Node* Cstack::push(Node* head)     //进栈函数
{
		printf("请输入要入栈的元素的值！\n");
		int x;
		Node* p = head;
		scanf("%d",&x);
		while(p->next != NULL)
			p = p->next;
		Node* q = new Node;
		q->val = x;
		q->next = NULL;
		p->next = q;
		top++;
		printf("入栈成功\n");
		return head;
}

Node* Cstack::pop(Node* head)    //退栈函数
{
	if(top == EMPTY)
	{
		printf("栈空,退栈失败\n");
		return NULL;
	}
	else
	{
		Node *p = head;
		if(p->next == NULL)
		{
			p->val = 0;
			return NULL;
		}
		while(p->next->next != NULL)
			p = p->next;
		Node* q = p->next;
		p->next = NULL;
		top--;
		printf("退栈成功\n");
		printf("退栈的元素为:%d\n",q->val);
		delete [] q;
	}
	return head;
}

void Cstack::display()
{
	if((top+1) == 0)
	{
		printf("栈空\n");
	}
	else
		printf("栈中元素个数为:%d\n",top+1);
}
