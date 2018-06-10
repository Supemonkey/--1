#include "stuCreate.h"
#include <string>
using namespace std;

//两个函数形成函数重载

//根据姓名删除
void anyDeletStrt(Node *pfront ,string n)
{
	string name;
	Node *pback;
	pback = pfront;
	pfront = pfront->next;//第一个节点为空，不是用第一个节点
	name = pfront->s.getName();//解决不会进入循环中
	
	while (pfront->next != NULL) {
		if (name == n) {
			pback->next = pfront->next;
			delete (pfront);//删除指针，释放空间。
			cout << "数据删除成功！" << endl;
			return;
		}
		pback = pfront;
		pfront = pfront->next;
		name = pfront->s.getName();
	}
	cout << "不存在数据，无法删除!" << endl;
	
	return;
}

//根据学号删除
void anyDeletStrt(Node *pfront, int i)
{
	int id;
	Node *pback;
	pback = pfront;
	pfront = pfront->next;//第一个节点为空，不是用第一个节点
	id = pfront->s.getId();//解决不会进入循环中

	while (pfront->next != NULL) {
		if (i == id) {
			pback->next = pfront->next;
			delete (pfront);//删除指针，释放空间。
			cout << "数据删除成功！" << endl;
			return;
		}
		pback = pfront;
		pfront = pfront->next;
		id = pfront->s.getId();
	}
	cout << "不存在数据，无法删除!" << endl;

	return;
}