#include <iostream>
using namespace std;
struct spell
{
    int a;
    int m;
}s[11];
bool vis[11];
int n,ans;
void dfs(int,int);
int main(){
    int hp;
    while (cin>>n>>hp)
    {
        ans=99;
        for (int i = 0; i < n; i++)
        {
            cin>>s[i].a>>s[i].m;
            vis[i]=0;
        }
        dfs(hp,0);
        if (ans==99)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
    return 0;
}
void dfs(int h,int step){
    if (step>=ans)
    {
        return;
    }
    if (h<=0)
    {
        if (step<ans)
        {
            ans=step;
        }
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            vis[i]=1;
            if (h<=s[i].m)
            {
                dfs(h-s[i].a*2,step+1);
            }
            else
            {
                dfs(h-s[i].a,step+1);
            }
            vis[i]=0;
        }
    }
}