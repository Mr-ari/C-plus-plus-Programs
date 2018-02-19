//working of Friend keyword

#include<iostream>
using namespace std;

class A;
class B{

	int x;
public :
	void setval(int i){x = i;}
	friend void max(A,B);
};

class A{

	int x;
public :
	void setval(int i){x = i;}
	friend void max(A,B);
};

void max(A a,B b){
	if (a.x > b.x) cout<<a.x<<endl;
	else if (b.x > a.x) cout<<b.x<<endl;
	else cout<<"equal"<<endl;
}
int main(void){
	A a;
	B b;

	a.setval(100);
	b.setval(30);

	max(a,b);

	return 0;


}