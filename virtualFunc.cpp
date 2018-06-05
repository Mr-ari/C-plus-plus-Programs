#include<iostream>
using namespace std;

class A{
    public:
    virtual void show(){cout<<"Class A ... this is where u are !! \n";}
};

class B : public A{
    public:
    void show(){cout<<"Class B ... thi is where u are !! \n";}
};

int main(){
    A ob1;
    B ob2;
    A *ptr;
    ptr = & ob2;
    ptr->show();
    return 0;
}