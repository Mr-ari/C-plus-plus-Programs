#include<iostream>
#include<string>
using namespace std;

int main(){
	
	string str("Hello World");//constructor
	//we can also initialize by
	//string str = "hello world";
	
	//declaring the iterator....
	std :: string :: iterator itr;
	
	//declaring the reverse_iterator...
	std :: string :: reverse_iterator itr1;
	
	cout << "Your String is :"<<endl;
	for (itr=str.begin();itr!=str.end();itr++){
		cout<<*itr;
	}
	cout<<endl;
	cout << "In reverse the string is :"<<endl;
	for (itr1=str.rbegin();itr1!=str.rend();itr1++){
		cout<<*itr1;
	}
	cout << endl;
	return 0;
}
