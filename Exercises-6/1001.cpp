#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector<int> a;
    int l,n,tem,res;
    bool flag;
    while (cin>>l>>n)
    {
        res=0;
        flag=false;
        for (int i = 0; i < n; i++)
        {
            cin>>tem;
            a.push_back(tem);
        }
        sort(a.begin(),a.end());
        for(int j = a.size()-1; j >= 0; j--){
            l-=a[j];
            res++;
            if (l<=0)
            {
                flag=true;
                break;
            }
        }
        if (flag)
        {
            cout<<res<<endl;
        }
        else
        {
            cout<<"impossible"<<endl;
        }
        a.clear();
    }
    return 0;
}