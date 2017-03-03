*********************************
function : compare int *const p  and  const int * p 
*********************************/
#include <iostream>
using namespace std;
int main(){
	//part 1  const int p;
	/******************************
	const int p=6;
	//p=3;error ,p read only
	cout<<p<<endl;
	******************************/

	//part 2  const int *p
	/*******************************
	int a=3,b=4;
	const int *p=&a;
	//*p =6; //wrong ,now *p is const 
	p=&b;    //right 
	cout<<*p<<endl;
	********************************/

	//part 3  int * const p
	/******************************
        int a=3,b=4;
	int *const p=&a;
	//p=&b;  //worng ,because p is const 
	 *p=b;   //right 
 	cout<<*p<<endl;
	*******************************/

	//part 4  const int * const p;
	/******************************
	int a=3,b=4;
	const int *const p=&a;
	//p=&b;  //wrong 
	//*p=b;  //wrong 
 	cout<<*p<<endl;
	*******************************/

	//part 4  int const * p  equal const int *p?
	int a=3,b=4;	
	int const *p=&a;
	p=&b;//right
	//*p=b;//wrong,bad bad bad action .  
	cout<<*p<<endl;
	return 0;
}
