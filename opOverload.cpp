#include<iostream>
using namespace std;

class Complex{

    int x,y;
    public:
    Complex(int m=0,int n=0){x=m;y=m;}
    void disp(){cout<<x<<" + i"<<y<<endl;}
    Complex operator + (Complex ob){
        Complex temp(x+ob.x,y+ob.y);
        return temp;
    }
};

int main(){
    Complex ab(3,4),bc(1,-9);
    Complex c;
    c = ab+bc;
    c.disp();
    return 0;
}