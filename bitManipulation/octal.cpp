
/*
input a num N(0<=N<=100000)
output the format of octal 
*/
#include<iostream>
using namespace std;

int main(){
	int N;
	while(cin>>N){
		if(N<0) return 0;
		cout<<oct<<N<<endl;
	}
	cout<<"test"<<endl;
	return 0;

}