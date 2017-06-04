#include<iostream>
typedef unsigned char BYTE;
using namespace std;
int basicCount1(BYTE v){
	int num=0;
	while(v){
		if(v%2==1)
			num++;
		v=v/2;
	}
	return num;
}
int bitCount1(BYTE v){
	int num=0;
	while(v){
		num+=v&0x1;
		v>>=1;
	}
	return num;
}

int main(){
	cout<<bitCount1(15)<<endl;
	return 0;
}