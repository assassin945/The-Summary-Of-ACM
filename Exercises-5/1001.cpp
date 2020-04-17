#include <iostream>
#include <cstring>
using namespace std;
void printNum(char[]);
int main(){
    char a1[1001],b1[1001];
    int a[1001],b[1001],c[1001];
    int lena,lenb,lenc;
    int x;
    int n,cas,tem;
    cin>>n;
    tem=n;
    cas=1;
    while (n--)
    {
        memset(a,0,sizeof(a));//初始化被加数数组
        memset(b,0,sizeof(b));//初始化加数数组
        memset(c,0,sizeof(c));//初始化结果数组

        scanf("%s %s",a1,b1);//获取两个数字
        lena=strlen(a1);//获取被加数字符串长度
        lenb=strlen(b1);//获取加数字符串长度

        for (int i = 0; i <= lena-1; i++)//将被加数字符串的每一个字符处理成数字
        {
            a[lena-i]=a1[i]-48;
        }
        for (int j = 0; j <= lenb-1; j++)//将加数字符串的每一个字符处理成数字
        {
            b[lenb-j]=b1[j]-48;
        }
        //开始计算
        lenc=1;
        x=0;
        while (lenc<=lena || lenc<=lenb)
        {
            c[lenc]=a[lenc]+b[lenc]+x;;
            x=c[lenc]/10;
            c[lenc]%=10;
            lenc++;
        }
        //处理最高位
        c[lenc]=x;
        if (c[lenc]==0)
        {
            lenc--;
        }
        //输出
        cout<<"Case "<<cas<<":"<<endl;
        printNum(a1);
        cout<<" + ";
        printNum(b1);
        cout<<" = ";
        for(int k = lenc; k > 0; k--){
            cout<<c[k];
        }
        if (cas!=tem)
        {
            cout<<"\n"<<"\n";
        }
        else
        {
            cout<<"\n";
        }
        cas++;
    }
    return 0;
}
void printNum(char s[]){
    int len=strlen(s);
    for (int i = 0; i < len; i++)
    {
        cout<<s[i];
    }
}