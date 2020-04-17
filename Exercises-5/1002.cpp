#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
    int a[40010];
    int n,cns,len;
    while (cin>>n)
    {
        memset(a, 0, sizeof(a));
        a[1] = 1;
        len = 1;
        for (int i = 1; i <= n; ++i)
        {
            cns = 0;
            for (int j = 1; j <= len; ++j)
            {
                a[j] = a[j] * i + cns;
                cns = a[j] / 10;
                a[j] = a[j] % 10;
                if (cns > 0 && j >= len)
                {
                    len++;
                }
            }
        }
        for (int k = len; k >= 1; k--) {
            printf("%d",a[k]);
        }
        printf("\n");
    }
    return 0;
}