#include <iostream>
using namespace std;
int main(){
    int n;
    int a[1001];
    int tempSum = 0,maxSum = 0;
    cin>>n;
    while (n--)
    {
        for(int i = 1; i <= n; i++){
            cin>>a[i];
        }
        for(int j = 1; j <= n; j++){
            tempSum += a[j];
            if (tempSum > maxSum)
            {
                maxSum = tempSum;
            }
            else if (tempSum < 0)
            {
                tempSum = 0;
            }
        }
    }
    cout<<maxSum<<endl;
}