#include <iostream>
using namespace std;
int main(){
    int cnt;
    int n;
    int A[10];
    int B[10];
    int C[11];
    while (cin>>n && n != 0)
    {
		cnt = 0;
        for(int i =0; i<n;i++){
            cin>>A[i];
        }
        for (int j = 0; j < n; j++)
        {
            cin>>B[j];
        }
        for (int k = 0; k < n; k++)
        {
            C[k] = A[k] + B[k] + cnt;
            cnt = 0;
            if (C[k] == 2)
            {
                C[k] = 0;
                cnt++;
            }
        }
        if (cnt == 0)
        {
            for (int p = 0; p < n; p++)
            {
                cout<<C[p];
            }
            cout<<endl;
        }
        else{
            C[n]=cnt;
            for (int q = 0; q < n + 1; q++)
            {
                cout<<C[q];
            }
            cout<<endl;
        }
    }
}
