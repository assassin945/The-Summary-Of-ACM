#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a[1001];
    int n,m;
    while (cin>>n>>m)
    {
        for (int i = 1; i <= n; i++)
        {
            a[i]=i;
        }
        for (int j = 1; j < m; j++) {
			next_permutation(a + 1, a + n + 1);//这个函数用于生成逆序序列
		}
		for (int k = 1; k <= n; k++) {
			printf("%d", a[k]);
			if (k != n)
				printf(" ");
		}
		printf("\n");
    }
    return 0;
}