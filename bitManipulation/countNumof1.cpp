/*
from  beauty of programming 
data  2017/6/4
*/
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
int count(BYTE v){
	int num=0;
	while(v){
		v&=(v-1);
		num++;
	}
	return num;
}
int main(){
   // int n;
    //cin>>n;
  //cout<<n<<endl;
	cout<<bitCount1(15)<<endl;
	return 0;
}