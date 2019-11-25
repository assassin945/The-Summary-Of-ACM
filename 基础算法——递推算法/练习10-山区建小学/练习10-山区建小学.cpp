// 练习10-山区建小学.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// There are something wrong

#include <iostream>
#include <algorithm>

using namespace std;
int a[501][501],c[501][501],f[501][501];
int main()
{
    int m,n,t,i,j,k,l,mid,s=0x7fffffff;
	memset(c, 0, sizeof(c));
	memset(f, 0, sizeof(f));
	memset(a, 0, sizeof(a));
    cin>>m>>n;
    for(i = 1; i<m;i++){
        cin>>a[i][i+1];
    }
    for(i = 1; i<=m; i++){
        for(j = 1; j <= m; j++){
            a[i][j]=a[j-1][j]+a[i][j-1];
            a[j][i]=a[i][j];
        }
    }
    for(i = 1; i <= m; i++){
        for(j = i + 1; j <= m; j++){
            mid = (i+j)/2;
            c[i][j]=0;
            for(k = i; k<=j;k++){
                c[i][j] += a[k][mid];
            }
        }
    }
    for(i = 1; i <= m; i++){
        f[i][1] = c[1][i];
    }
    for(i = 1; i <= m; i++){
        for(j = 2; j <= n; j++){
            f[i][j] = 1000000;
            for(k = j - 1; k <= i; k++){
                f[i][j] = min(f[i][j],f[k][j-1]+c[k+1][i]);
            }
        }
    }
    cout<<f[m][n]<<endl;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
