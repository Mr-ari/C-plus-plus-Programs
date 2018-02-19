#include<iostream>
using namespace std;

class test
{
	int num;
public:
	int count =0;
	void getdata(int a);
	void getcount(void);
	
};

void test :: getdata(int a){
	num = a;
	count++;
}
void test :: getcount(void){
	cout<<"count ="<<count<<endl;
}
//int test :: count;
int main(){
	test a,b,c;

	a.getcount();
	b.getcount();
	c.getcount();
	
	a.getdata(100);
	b.getdata(1000);
	c.getdata(10000);

	a.getcount();
	b.getcount();
	c.getcount();

	return 0;
}
