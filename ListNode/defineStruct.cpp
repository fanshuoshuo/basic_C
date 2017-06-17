#include <iostream>
using namespace std;
struct ListNode{
	int val;
	ListNode *Next;
};
int main(){

	//实例化一个struct的时候，val会有默认赋值

	/*指针的错误使用方式
	int * d;
	cout<<*d<<endl;
    */
    //两种不同的方式实例化结构体
	ListNode a;
	cout<<a.val<<endl;

	ListNode *b=new ListNode();
	cout<<b->val<<" "<<b->Next<<endl;

	ListNode *p=new ListNode();   //p is Null ,&p is Null 
	cout<<"p  "<<p<<endl;
	cout<<"&p  "<<&p<<endl;
	cout<<"p->val  "<<p->val<<endl;
	cout<<"p->Next  "<<p->Next<<endl;
	ListNode **q=&p;
	cout<<*q<<endl;  //Now *q == p
	//cout<<**q<<endl;  **q is wrong   because **q =*p
	cout<<q<<endl;	 // q == &p

	//one more thing 
	//ListNode *p ;通常这样p是为空的，但是偶尔会出现p不为空，比如以下
	/*
	ListNode *p； 
	cout<<"p  "<<p<<endl;
	cout<<"&p  "<<&p<<endl;
	cout<<"p->val  "<<p->val<<endl;
	cout<<"p->Next  "<<p->Next<<endl;
	ListNode **q=&p;
	cout<<*q<<endl; 
	cout<<q<<endl;	 //加了这句话p莫名不不为空
	*/

	return 0;
}