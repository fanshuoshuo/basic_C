/***************************************

function :exchange 2 numbers in point 
author   :fanshuoshuo
date     :20170303

*****************************************/
#include <iostream>
#include <cstdlib>
using namespace std;

void exchange2num(int *a,int *b){
	int temp;
	temp=*a;
	*b   =*a;
	*a   =temp;

}
void exchange2um_reference(int &a,int &b){
	int tmp=a;
	a=b;
	b=tmp;
}
void exchange2num_wrong(int a,int b){
	int temp=a;
	a=b;
	b=temp;
	
}

int main(){

	int a=2,b=7;
	cout<<"two numbers is "<<a<<"  "<<b<<endl;
	//exchange2num(&a,&b);
	exchange2um_reference(a,b);
	//using reference is a faster way 
        cout<<"after exchange "<<a<<"  "<<b<<endl;
	return 0;

}
