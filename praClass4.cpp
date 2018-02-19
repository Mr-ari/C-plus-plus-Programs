#include<iostream>
using namespace std;

class time{

	int hours;
	int minutes;
public:
	void gettime(int ,int );
	void puttime (void);
	void sum(time , time);
};

void time :: gettime(int h,int m){
	hours = h;
	minutes = m;
} 
void time :: puttime(void){
	cout<<"hours : "<<hours<<"minutes : "<<minutes<<endl;
}
void time :: sum(time t1,time t2){
	minutes = t1.minutes + t2.minutes;
	hours = minutes/60;
	minutes = minutes % 60;
	hours = hours + t1.hours+t2.hours;
}

int main(){

	time a,b,c
	a.gettime(2,45);
	b.gettime(3,59);
	c.sum();
	a.puttime();
	b.puttime();
	c.puttime();

	return 0;
}