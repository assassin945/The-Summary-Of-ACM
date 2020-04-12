#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
struct clock
{
    int h;
    int m;
    double a;
}c[6];
int main(){
    int n;
    int th,tm;
    double ta;
    cin>>n;
    while (n--)
    {
        for (int i = 0; i < 5; i++)
        {
            scanf("%d:%d",&c[i].h,&c[i].m);//杭电oj在这个地方对abs的识别有非常大的问题
            double hh=(c[i].h%12)*30+c[i].m*0.5;
            double mm=c[i].m*6;
            c[i].a=abs(hh-mm)>180?(360-abs(hh-mm)):abs(hh-mm);
        }
        //sort
        //对于排序有更优方案
        for (int j = 0; j < 4; j++)
        {
            for (int k = j+1; k < 5; k++)
            {
                if (c[k].a<c[j].a)
                {
                    th=c[k].h;
                    tm=c[k].m;
                    ta=c[k].a;
                    c[k].h=c[j].h;
                    c[k].m=c[j].m;
                    c[k].a=c[j].a;
                    c[j].h=th;
                    c[j].m=tm;
                    c[j].a=ta;
                }
                else if (c[k].a==c[j].a)
                {
                    if (c[k].h<c[j].h)
                    {
                        th=c[k].h;
                        tm=c[k].m;
                        ta=c[k].a;
                        c[k].h=c[j].h;
                        c[k].m=c[j].m;
                        c[k].a=c[j].a;
                        c[j].h=th;
                        c[j].m=tm;
                        c[j].a=ta;
                    }
                }
            }
        }
        //output
        printf("%02d:%02d\n",c[2].h,c[2].m);
    }
    return 0;
}