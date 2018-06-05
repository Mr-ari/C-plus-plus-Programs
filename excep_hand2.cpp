#include<bits/stdc++.h>
using namespace std;

template <typename T,typename S>
void div_(T a,S b){
    if(b == 0) throw (b);
    else cout<<"Division = "<<double(a/b)<<endl;
}

int main(){
    try {
        div_(10.0,20);
        div_(1,0);
    }
    catch(int x){
        cout<<"Exception Caugth\n";
    }
}