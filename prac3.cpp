#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	enum{sun=1,mon,tue,wed};
	cout<<mon<<endl;
	float a=89.36;
	float *ptr;
	ptr = &a;
	cout<<*ptr<<endl;
	cout<<sizeof(float)<<endl;
	return 0;
}