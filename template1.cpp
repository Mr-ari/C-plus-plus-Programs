#include<bits/stdc++.h>
using namespace std;
int size=3;
//template <typename T> inline T mini(T &a,T &b){return a>b ? a:b;}
template <class T>
class Vector{
    T *arr;
public:
    Vector(int m){
        arr = new T [size=m];
        memset(arr,0,size);
    }
    Vector(int *B){
        for(int i=0;i<size;i++) arr[i]=B[i];
    }
    T operator * (Vector a){
        T sum=0;   
        for(int i=0;i<size;i++){
            sum+=this->arr[i]+a.arr[i];
        }
        return sum;
    }
};

int main(){
    int x[3] = { 1, 2, 3 };
    int y[3] = { 2, 3, 4 };
    Vector <int> v(x);
    Vector <int> v1(y);
    int res = v * v1;
    cout<<"Sum is = "<<res<<endl;
    return 0;
}