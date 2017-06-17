/*
使用双重指针和指针引用来建立和删除链表
注意两种方式传递的实参是不一样的，双重指针&p，指针引用直接用p即可
*/
#include <iostream>
using namespace std;
struct ListNode{
	int val;
	ListNode *Next;
};
void AddToTailUseTwoPoint(ListNode **pHead,int val){
	ListNode *pNew=new ListNode();
	pNew->val=val;
	pNew->Next=NULL;
	if(*pHead==NULL){
		*pHead=pNew;
	}else{
		ListNode *pNode=*pHead;
		while(pNode->Next!=NULL){
			pNode=pNode->Next;
		}
		pNode->Next=pNew;
	}
}
void AddToTailUseRef(ListNode *& pHead,int val){
	ListNode *pNew=new ListNode();
	pNew->val=val;
	pNew->Next=NULL;
	if(pHead==NULL){
		pHead=pNew;
	}else{
		ListNode *pNode=pHead;
		while(pNode->Next!=NULL){
			pNode=pNode->Next;
		}
		pNode->Next=pNew;
	}
}
void RemoveNodeUseTwoPoint(ListNode **pHead,int val ){
	if(*pHead==NULL || pHead==NULL)
		return  ;
	ListNode *pToBedelted=NULL;
    if((*pHead)->val==val){
    	pToBedelted=*pHead;
    	*pHead=(*pHead)->Next;
    }else{
        ListNode *pNode=*pHead;
        while(pNode->Next!=NULL && pNode->Next->val!=val){
        	pNode=pNode->Next;
        }
        if(pNode->Next!=NULL&&pNode->Next->val==val){
        	pToBedelted=pNode->Next;
        	pNode->Next=pNode->Next->Next;
        }

    }
	if(pToBedelted!=NULL){
		delete pToBedelted;
		pToBedelted=NULL;
	}

}
void RemoveNodeUseRef(ListNode *&pHead,int val ){
	if( pHead==NULL)
		return  ;
	ListNode *pToBedelted=NULL;
    if(pHead->val==val){
    	pToBedelted=pHead;
    	pHead=pHead->Next;
    }else{
        ListNode *pNode=pHead;
        while(pNode->Next!=NULL && pNode->Next->val!=val){
        	pNode=pNode->Next;
        }
        if(pNode->Next!=NULL&&pNode->Next->val==val){
        	pToBedelted=pNode->Next;
        	pNode->Next=pNode->Next->Next;
        }

    }
	if(pToBedelted!=NULL){
		delete pToBedelted;
		pToBedelted=NULL;
	}

}
int main(){

	return 0;
}