#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int n;
    int index,len,zero;
    char a[200];
    cin>>n;
    while (n--)
    {
        cin>>a;
        len=strlen(a);
        index=0;
        zero=0;
        for(index=len-1; index>0; index--){
            if (a[index]=='0')
            {
                zero++;
            }
            if (a[index]!='0')
            {
                break;
            }
        }
        if (a[0]=='-')
        {
            cout<<'-';
            for(int i = index; i > 0; i--){
                cout<<a[i];
            }
            for (int j = 0; j < zero; j++)
            {
                cout<<'0';
            }
        }
        else
        {
            for(int i = index; i >= 0; i--){
                cout<<a[i];
            }
            for (int j = 0; j < zero; j++)
            {
                cout<<'0';
            }
        }
        cout<<endl;
    }
    return 0;
}