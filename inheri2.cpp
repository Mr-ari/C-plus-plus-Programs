#include<iostream>
using namespace std;

class B {
    int a;
public:
    int b;
    void get_ab(int m,int n){a=m;b=n;}
    int re_a(){return a;}
    void show_ab(){cout<<"a = "<<a<<"\tb = "<<b<<endl;}
};

class D : private B{ // here access specifier id PUBLIC 
    int c;
public:
    void ini(){get_ab(100,200);}
    int mul_(){c=b*re_a();}
    void disp(){cout<<"a = "<<re_a()<<"\tb = "<<b<<"\tmul = "<<c<<endl;}
};

int main(){
    D ob;
    ob.ini();
    ob.mul_();
    ob.disp();
    return 0;
}