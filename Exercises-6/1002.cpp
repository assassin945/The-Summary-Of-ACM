#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
#define LL long long
struct Road
{
    int d,p;
    bool operator < (const Road &a) const {return p>a.p;}
}r[10005];
int main()
{
    LL n,m;
    while(scanf("%I64d%I64d",&n,&m)!=EOF)
    {
        if(n==0&&m==0) break;
        if(n==0) printf("0\n");
        for(int i=0;i<n;i++) scanf("%d%d",&r[i].d,&r[i].p);
        sort(r,r+n);
        LL ans=0,ret=m;
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            if(!flag) {ans+=(r[i].d*r[i].p);continue;}
            ret-=r[i].d;
            if(ret>=0) continue;
            else
            {
                ans+=((-ret)*r[i].p);
                flag=false;
            }
        }
        printf("%I64d\n",ans);
    }
}