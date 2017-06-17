/*
string to Int 
Int to string
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <utility>
using namespace std;
int StringToInt(string s){
    //要考虑负数，是否溢出等等
	if(s.empty()) return 0;
	int res=0;
	for(int i=0;i<s.size();i++){
		res=res*10+s[i]-'0';
	}
	return res;
}
int StringToInt_atoi(string s){
	return atoi(s.c_str());
}

int StringToInt_sstream(string s){
	istringstream is(s);
	int res;
	is>>res;
	return res;
}
string IntToString_std(int num){
	//a bug in MinGW
//	return std::to_string(num);
	//may 
}
string IntToString_sstream(int num){
	ostringstream os;
	os<<num;
	return os.str();
}
int main(){
	string s="+19921023";
	int num=0;
	num=StringToInt_sstream(s);
	cout<<num<<endl;

	string copyS;
	//method 2
	return 0;
}