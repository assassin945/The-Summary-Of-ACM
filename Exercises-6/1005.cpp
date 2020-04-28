#include <iostream>
using namespace std;
int main(){
    int t,n,left,right,mmax;
    int vis[203];
    cin>>t;
    while (t--)
    {
        for (int i = 0; i < 203; i++)
        {
            vis[i]=0;
        }
        cin>>n;
        for(int i = 1; i <= n; i++){
            cin>>left>>right;
            if(left>right){
                int tmp=left;
                left=right;
                right=tmp;
            }
            for (int j = (left+1)/2; j <= (right+1)/2; j++)
            {//这个位置很关键，一定要把区间折半，不然会超时
                vis[j]++;
            }
        }
        mmax=0;
        for (int k = 0; k < 203; k++)
        {
            if (vis[k]>mmax)
            {
                mmax=vis[k];
            }
        }
        cout<<mmax*10<<endl;
    }
    return 0;
}