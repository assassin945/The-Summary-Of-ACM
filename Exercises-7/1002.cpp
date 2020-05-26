#include <iostream>
#include <algorithm>
using namespace std;
struct time
{
    int b;
    int e;
}t[101];
bool cmp(time,time);
int main(){
    int n,end,res;
    while (cin>>n && n!=0)
    {
        for(int i = 0; i < n; i++){
            cin>>t[i].b>>t[i].e;
        }
        sort(t,t+n,cmp);
        end=t[0].e;
        res=1;
        for (int j = 1; j < n; j++)
        {
            if (t[j].b>=end)
            {
                end=t[j].e;
                res++;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
bool cmp(time t1, time t2){
    if (t1.e==t2.e)
    {
        return t1.b<t2.b;
    }
    return t1.e<t2.e;
}