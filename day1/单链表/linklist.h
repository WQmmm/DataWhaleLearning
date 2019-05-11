////////linklist.h///////////

class linkList;
 
class linkListNode
{
friend class linkList;
public:
	linkListNode(int d=0,linkListNode *link=NULL):data(d),next(link){}
private:
	int data;
	linkListNode *next;
};

typedef linkListNode *linkListNodeptr;

class linkList
{
public:
	linkList();
	~linkList();
	void creatlink();    //构造函数声明
	void dispaly();      //输出函数声明
	void insert();       //插入函数
	void remove();       //删除函数
	void search();       //查找函数
	void length();       //求链表长度函数声明
private:
	linkListNodeptr head;
};

