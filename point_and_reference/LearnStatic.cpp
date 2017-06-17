/*
learn to use static in function ,in class 
*/
#include <iostream>
#include <string>
using namespace std;
class Student{
private:
	string name;
	int  No;
	static int countS;
public:
	static int getcountS(){
		return countS;
	}
	void setcountS(int a){
		countS=a;
	}

};
int Student::countS=0;
void UseConst(){
	static int a=1;
 	//int a=1;
	a++;
	cout<<a<<endl;
}
int main(){
	
	UseConst();
	UseConst();
    
	cout<<"CountS is "<<Student::getcountS()<<endl;
	Student S1;
	S1.setcountS(1);
	// S1 and S2 use the same countS because the type countS is static
	Student S2;
	cout<<"CountS is "<<S2.getcountS()<<endl;
	return 0;
}