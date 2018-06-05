#include <bits/stdc++.h>
using namespace std;

void sub(int a,int b){
    int c = a-b;
    try{
        if(c == 0) throw (c);
        else cout<<"Sub = "<<c<<endl;
    }
    catch(int i){
        cout<<"Exception caugth "<<i<<endl;
    }
}
int main(){
    sub(10,10);
    return 0;
}