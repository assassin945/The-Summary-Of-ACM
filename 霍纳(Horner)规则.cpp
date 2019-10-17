/*
    霍纳规则，也可称之为秦九韶算法，该算法被用于简化多项式求值方面
*/
#include <iostream>
using namespace std;
template <class T>
T horner(T x, T a[], int n){
    T y;
    for (int i = n - 1; i >= 0; i--)
    {
        y = a[i] + x * y;
    }
    return y;
}
int main(){
    int a[] = {1,2,3,4};
    int n = 4;
    int x;
    cin>>x;
    cout<<horner(x,a,n)<<endl;
}
