#include "stuCreate.h"
#include <string>
using namespace std;

void nameDeletStrt(Node *pfront ,string n)
{
	string name;
	Node *pback;
	pback = pfront;
	pfront = pfront->next;//第一个节点为空，不是用第一个节点
	name = pfront->s.getName();//解决不会进入循环中
	
	while (name != n) {
		pfront = pfront->next;
		pback = pfront;
		name = pfront->s.getName();
	}
	if (pfront->next == NULL) {
		pback = NULL;
		cout << "1删除成功" << endl;
	}
	else {
		pback->next = pfront->next;
		pfront->next = NULL;
		cout << "2删除成功" << endl;
	}
	
	return;
}