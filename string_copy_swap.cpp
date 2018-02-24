#include<iostream>
#include<string>
using namespace std;

int main(){
	
	string s1("Hello World");
	string s2;
	
	//coping s1 string s2 using assing function
	s2.assign(s1);
	
	cout<<"s1 string is - "<<s1<<endl;
	cout<<"s2 string is - "<<s2<<endl;
	
	return 0;
}
