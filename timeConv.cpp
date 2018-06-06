#include<bits/stdc++.h>
using namespace std;
class Time12;
class Time24{
    int hr,min,sec;
    public:
    Time24(int h,int m,int s){hr=h,min=m,sec=s;}
    void print(){cout<<"Time 24 hours = "<<hr<<":"<<min<<":"<<sec<<endl;}
    friend void timeCon(Time12 &,Time24 &,int);
};

class Time12{
    int hr,min,sec;
    string str;
    public:
    Time12(){};
    friend void timeCon(Time12 &,Time24 &,int);
    Time12(int h,int m,int s,string st){hr=h;min=m;sec=s;str=st;}
    void print(){cout<<"Time 12 hours = "<<hr<<":"<<min<<":"<<sec<<" "<<str<<endl;}
    friend void timeCon(Time12,Time24,bool);
};

void timeCon(Time12 &t12,Time24 &t24,int flag){
    if(flag){ // flag == true for conversion of 12 ---> 24 hours and opposite for 24 ---> 12
        t24.min = t12.min;
        t24.sec = t12.sec;
        t24.hr = t12.hr;
        if(t12.str == "PM"){t24.hr+=12;}
    }
    else {
        t12.min = t24.min;
        t12.sec = t24.sec;
        t12.hr = t24.hr;
        if(t24.hr > 12){t12.hr-=12;t12.str = "PM";}
        else t12.str="AM";
    }
}

int main(){
    Time24 t(14,5,56);
    Time12 t1;
    int flag=0;
    timeCon(t1,t,flag);
    t1.print();
    return 0;
}
