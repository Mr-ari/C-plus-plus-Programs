#include<iostream>
#include<string>
using namespace std;
int main(){

string s1(5,'*');
string s2(6,'#');
//append function concatenate two string
s1.append(s2);
cout<<"After appending -- "<<s1<<endl;

//substring function (strting index,how namy char after that)

string s3 = s1.substr(0,5);
cout<<"The s3 string is - "<<s3<<endl;

//erase a string 
s1.erase(0,5);
cout<<"After erasing the s1 string is - "<<s1<<endl;
s1.clear();
s1= "*****######";
//find function---it finds the substring in the string and return the startng index
int pos = s1.find('#');
cout<<"# found at the index no - "<<pos<<endl;

//replace function
//function desc --- str.replace(a,b,str_1)
//a= the starting index.....b= upto how many string...str_1 = the string to be replace
s1.replace(pos,1,"and");
cout<<"After replacing the string is "<<s1<<endl;   
return 0;
}

