#include<iostream>
#include<string> //including the string library
using namespace std;

int main(){
	
	//the function cin only takes no white space string if we want to take whitespace as an input
	//we have to try getline function
	/*
	string x;
	cout<<"taking input no white space : "<< endl;
	cin>>x;
	cout<<"Here is your string: "<<x<<endl;*/
	//getline function takes two arguments one is cin and other is string name
	string name;
	cout<<"taking input with white space: "<<endl;
	getline (cin,name);
	cout<<"Here is your string: "<<name<<endl;
	name.push_back('k');
	cout<<"After pushing : "<< name<<endl;
	name.pop_back();
	cout<<"After pop the string will be : "<<name <<endl;
	return 0;
	
} 
