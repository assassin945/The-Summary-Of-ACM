#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int n,k,res,counter;
int map[31][31];
int vis[31];
void dfs(int,int,int);
int main(){
    int temp;
    while (cin>>n && n)
    {
        //初始化地图
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin>>map[i][j];
            }
        }
        memset(vis,0,sizeof(vis));
        counter=0;
        res=1001*31;
        //初始化站点
        cin>>k;
        for (int i = 0; i < k; i++)
        {
            cin>>temp;
            if (!vis[temp])//站点出现过就跳过，1表示出现过
            {
                vis[temp]=1;//标记站点
                counter++;//记录一共有几个站点
            }
        }
        //暴力搜索
        dfs(0,0,0);
        cout<<res<<endl;
    }
    return 0;
}
void dfs(int count,int sum,int start){//三个参数分别代表计数器、路程和、起始点
    if (count==counter)//计数器与总站点数一致时函数返回
    {
        res=min(res,sum);//结果取总和与结果两者的最小值
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (vis[i])//只有标记的站点才会进入路长计数
        {
            vis[i]=0;//将这一站点标记为无效站点，这样能够避免在迭代过程中重复计算
            dfs(count+1,sum+map[start][i],i);//进行迭代
            vis[i]=1;//重新恢复站点标记
        }
    }
}