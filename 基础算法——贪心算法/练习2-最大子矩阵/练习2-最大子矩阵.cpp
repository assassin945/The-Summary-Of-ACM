// 练习2-最大子矩阵.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int a[101][101];
int main()
{
	int n, ans, max = -100000;
	while (cin>>n && n != 0)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				cin >> a[i][j];
				a[i][j] += a[i][j - 1];
			}
		}
		for (int i = 0; i <= n-1; i++)
		{
			for (int j = i + 1; j <= n; j++)
			{
				ans = 0;
				for (int k = 1; k <= n; k++)
				{
					ans += a[k][j] - a[k][i];
					if (ans>max)
					{
						max = ans;
					}
					if (ans<0)
					{
						ans = 0;
					}
				}
			}
		}
		cout << max << endl;
	}
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
