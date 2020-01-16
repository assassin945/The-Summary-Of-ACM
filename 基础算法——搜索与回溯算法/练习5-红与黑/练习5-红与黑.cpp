// 练习5-红与黑.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int a[22][22], w, h, total;
void dfs(int, int);

int main()
{
	int x, y;
	char a1;
	while (cin>>w>>h && !(w == 0 && h == 0))
	{
		total = 0;
		memset(a, 0, sizeof(a));
		for (int i = 1; i <= h; i++) {
			for (int j = 1; j <= w; j++) {
				cin >> a1;
				if (a1 == '.' || a1 == '@')
				{
					a[i][j] = 1;
				}
				if (a1 == '@')
				{
					x = i;
					y = j;
				}
			}
		}
		dfs(x, y);
		cout << total << endl;
	}
}
void dfs(int p, int q) {
	total++;
	a[p][q] = 0;
	if (a[p+1][q])
	{
		dfs(p + 1, q);
	}
	if (a[p-1][q])
	{
		dfs(p - 1, q);
	}
	if (a[p][q+1])
	{
		dfs(p, q + 1);
	}
	if (a[p][q-1])
	{
		dfs(p, q - 1);
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
