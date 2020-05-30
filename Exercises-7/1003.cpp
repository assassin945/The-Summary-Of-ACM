#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main(){
    int n,mmax,temp;
    int a[3001];
    while (scanf("%d",&n)!=EOF)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        temp=1;
        mmax=1;
        for (int j = 1; j < n; j++)
        {
            if (a[j]==a[j-1])
            {
                temp++;
                if (temp>mmax)
                {
                    mmax=temp;
                }
                continue;//这步很关键，可以减少重复计算
            }
            temp=1;
        }
        printf("%d\n",mmax);
    }
    return 0;
}