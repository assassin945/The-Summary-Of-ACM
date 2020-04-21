#include <iostream>
#include <algorithm>
using namespace std;
struct hero
{
    double dps;
    double hp;
}hs[21];
bool cmp(hero,hero);
int main(){
    int n;
    double res;
    while (cin>>n)
    {
        res=0;
        for (int i = 0; i < n; i++)
        {
            cin>>hs[i].dps>>hs[i].hp;
        }
        sort(hs,hs+n,cmp);
        for (int i = 0; i < n; i++)
        {
            res+=(hs[i].hp*hs[i].dps);
            for (int j = i+1; j < n; j++)
            {
                res+=(hs[j].dps*hs[i].hp);
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
bool cmp(hero h1,hero h2){
    return ((h1.dps/h1.hp)>(h2.dps/h2.hp));
}