#include<iostream>
using namespace std;
int main(){

string s1(5,'*');
string s2(5,'#');
s1.append(s2);
cout<<s1<<"\t"<<s2<<endl;
return 0;
}

