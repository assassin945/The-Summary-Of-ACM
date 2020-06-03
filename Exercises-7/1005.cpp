#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct wooden_sticks
{
    int l;
    int w;
}a[5001];
bool cmp(wooden_sticks,wooden_sticks);
int main(){
    int t,n,p,q;
    wooden_sticks temp[1001];
    cin>>t;
    while (t--)
    {
        cin>>n;
        for (int i = 1; i <= n; i++)
        {
            cin>>a[i].l>>a[i].w;
        }
        sort(a,a+n,cmp);//按照l升序排列
        p=1;//这之后求解过程与“题目-1004”一致
        temp[p]=a[1];
        for (int i = 2; i <= n; i++)
        {
            q=0;
            for (int j = 1; j <= p; j++)
            {
                if (temp[j].w<=a[i].w)
                {
                    if (q==0)
                    {//若q处于初始状态，则更新q
                        q=j;
                    }
                    else if (temp[j].w>=temp[q].w)
                    {//如果当前记录者的w比上一记录者的w大，则更新q
                        q=j;
                    }
                }
            }
            if (q==0)
            {//若q未被更新，则说明当前a[i]是需要多消耗时间的
                p++;
                temp[p]=a[i];//新增一个记录者
            }
            else
            {//若q已被更新，则说明当前a[i]不需要多消耗时间
                temp[q]=a[i];//更新当前q所标识的记录者
            }
        }
        cout<<p<<endl;//输出结果
    }
    return 0;
}
bool cmp(wooden_sticks w1,wooden_sticks w2){
    if (w1.l==w2.l)
    {
        return w1.w<w2.w;
    }
    return w1.l<w2.l;
}