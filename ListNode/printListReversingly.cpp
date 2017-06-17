#include <iostream>
#include <stack>
using namespace std;
struct ListNode{
	int val;
	ListNode *next;
};
void printListReversingly_Stack(ListNode *pHead){
	stack<int> nodes;
	ListNode *pNode=pHead;
	if(pNode==NULL){
		cout<<"ListNode is empty"<<endl;
	}else{
		while(pNode->next!=NULL){
			nodes.push(pNode->val);
			pNode=pNode->next;
		}
		while(!nodes.empty()){
			cout<<nodes.top()<<" ";
			nodes.pop();
		}
		cout<<endl;
	}
}
void printListReversingly_Recursively(ListNode *pHead){
    ListNode *pNode=pHead;
    if(pNode==NULL){
		cout<<"ListNode is empty"<<endl;
	}else{
		while(pNode->next!=NULL)
			pNode=pNode->next;
		cout<<pNode->val<<" ";
	}
}
int main(){
	return 0;
}
