// 练习8-寻找平面上的极大点.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <algorithm>
using namespace std;
int ans[101][3], a[101][101];
int mx, my, t, m, n, x, y;
int main()
{
	cin >> n;
	mx = -1, my = -1;
	t = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> x >> y;
		a[x][y] = 1;
		mx = max(mx, x);
		my = max(my, y);
	}
	for (int i = mx; i >= 0; i--) {
		for (int j = my; j > m; j--) {
			if (a[i][j] == 1)
			{
				m = j;
				t++;
				ans[t][1] = i;
				ans[t][2] = j;
			}
		}
	}
	for (int k = t; k >= 1; k--) {
		if (k == 1)
		{
			cout << "(" << ans[k][1] << "," << ans[k][2] << ")";
		}
		else
		{
			cout << "(" << ans[k][1] << "," << ans[k][2] << "),";
		}
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
