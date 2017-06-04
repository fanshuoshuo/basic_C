#include <iostream>
using namespace std;
int findComplement(int num){
	unsigned mask=~0;
	while(mask&num) mask<<=1;
	return ~mask&~num;
}
int main(){
	cout<<findComplement(5)<<endl;
	return 0;
}