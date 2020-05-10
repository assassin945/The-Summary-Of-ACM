#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
struct A
{
    double J;
    double F;
    double rate;
}a[1001];
bool cmp(A,A);
int main(){
    double m;
    int n;
    double res;
    while (scanf("%lf %d",&m,&n)!=EOF)
    {
        res=0;
        if (m==-1&&n==-1)
        {
            break;
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%lf %lf",&a[i].J,&a[i].F);
            a[i].rate=a[i].J/a[i].F;
        }
        sort(a,a+n,cmp);
        for (int i = 0; i < n; i++)
        {
            if (m<a[i].F)
            {
                res+=a[i].rate*m;
                break;
            }
            res+=a[i].J;
            m-=a[i].F;
        }
        printf("%.3lf\n",res);
    }
    return 0;
}
bool cmp(A a1,A a2){
    return a1.rate>a2.rate;
}