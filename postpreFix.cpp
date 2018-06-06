#include<bits/stdc++.h>
using namespace std;

class marks{
    int m;
    public:
    marks(){m=0;}
    marks(int n=0){m=n;}
    marks (marks &mr){m = mr.m;}
    void show(){cout<<"Marks = "<<m<<endl;}
    void operator++(){m += 1;}//prefix
//    friend void operator ++ (marks &);//by friend function prefix
    marks operator -- (int){
        marks duplicate(*this);
        m -= 1;
        return duplicate;
    }//postfix
  //  friend marks operator -- (marks &,int);//by friend function
};


int main(){
    marks m1(1001);
    m1.show();
    ++m1;
    m1.show();
    (m1--).show();
    m1.show();
}
