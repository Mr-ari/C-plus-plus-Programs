#include <iostream>
#include<cmath>
using namespace std;

class Polar {

	double r;
	double a;

public:
	Polar(){r=0;a=0;}
	Polar(double ra,double aa){r=ra;a=aa;}
	Polar operator + (Polar p){
		Polar temp;
		double x2 = p.r * cos(p.a);
		double y2 = p.r * sin(p.a);
		double x1 = r * cos(a);
		double y1 = r * sin(a);

		x1 = x1+x2;
		y1 = y1+y2;

		temp.r = sqrt(pow(x1,2)+pow(y1,2));
		temp.a = atan(x1/y1); 

	}
	void print(){
		cout<<"Point ("<<r<<","<<a<<")"<<endl;
	}
};

int main(){
	Polar p2(12,30),p1(45,45);
	p2.print();
	p1.print();
	Polar p=p2+p1;
	p.print();
	return 0;

}