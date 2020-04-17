#include <iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char input[209];
int sum[209];
int main()
{
    int t;
    scanf("%d",&t);//实例个数
    while(t--)
    {
        memset(sum,0,sizeof(sum));//初始化总和为0
        while(true)
        {
            scanf("%s",input);//输入的一个大数
            if(strcmp(input,"0")==0){
                break;
            }
            int len=strlen(input);
            int i=len-1;
            for(int j=i; j>=0; j--){
                sum[i-j]+=input[j]-'0';
            }   
        }
        int c=0;
        for(int i=0; i<200; i++)//总和进位
        {
            int s = c+sum[i];
            c = s/10;
            sum[i] = s%10;
        }
        int i;
        for(i=199; i>=0; i--){
            if(sum[i]!=0)
            {
                break;
            }
        }
        //找到总和的最高位，总和的高位在右
        for(; i>0; i--){
            printf("%d",sum[i]);
        }   
        printf("%d",sum[0]);
        printf("\n");
        if(t>0)printf("\n");
    }
    return 0;
}