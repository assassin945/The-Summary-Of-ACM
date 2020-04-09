#include <iostream>
using namespace std;
int main(){
    int u,d,n;
    int current,res;
    while (cin>>n>>u>>d)
    {
        if (n==0)
        {
            break;
        }
        current=0;
        res=0;
        while (true)
        {
            current+=u;
            res++;
            if (current>=n)
            {
                cout<<res<<endl;
                break;
            }
            current-=d;
            res++;
        }
    }
    return 0;
}