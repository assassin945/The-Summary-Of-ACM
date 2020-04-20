#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
struct homework
{
    int ddl;
    int rs;
}h[1001];
bool cmp(homework,homework);
int main(){
    int t,n,res;
    int f[1001],temp;
    cin>>t;
    while (t--)
    {
        memset(f,0,sizeof(f));
        res=0;
        cin>>n;
        for (int i = 1; i <= n; i++)
        {
            cin>>h[i].ddl;
        }
        for (int j = 1; j <= n; j++)
        {
            cin>>h[j].rs;
        }
        sort(h+1,h+n+1,cmp);
        for (int k = 1; k <= n; k++){
            temp=h[k].ddl;
            while (temp)
            {
                if (!f[temp])
                {
                    f[temp]=1;
                    break;
                }
                else
                {
                    temp--;
                }
                if (temp==0)
                {
                    res+=h[k].rs;
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
bool cmp(homework h1,homework h2){
    if (h1.rs>h2.rs)
    {
        return 1;
    }
    else if (h1.rs==h2.rs && h1.ddl<h2.ddl)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}