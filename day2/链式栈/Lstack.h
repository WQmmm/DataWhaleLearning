/////Lstack.h/////

#define EMPTY -1
typedef int op_code;

typedef int element_type;

struct Node{
	element_type val;
	Node* next;
};


class Cstack
{
public:
	int top;
	Node* head;
public:
	Cstack();
	//bool empty()const;
	Node* pop(Node* head);              //退栈函数声明
	Node* push(Node* head);             //进栈函数声明
	void display();                     //查看栈中元素个数函数声明
	int show();
};
