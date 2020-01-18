// 例6.5-活动选择.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int n;
int beg[1001], en[1001];
void qsort(int, int);
void solve();

int main()
{
	while (cin>>n)
	{
		for (int i = 1; i <= n; i++)
		{
			cin >> beg[i] >> en[i];
		}
		qsort(1, n);
		solve();
	}
}
void qsort(int x, int y) {
	int i = x;
	int j = y;
	int mid = en[(x + y) / 2];
	int t;
	while (i<=j)
	{
		while (en[i]<mid)
		{
			i++;
		}
		while (en[j]>mid)
		{
			j--;
		}
		if (i<=j)
		{
			t = en[j];
			en[j] = en[i];
			en[i] = t;

			t = beg[j];
			beg[j] = beg[i];
			beg[i] = t;

			i++;
			j--;
		}
	}
	if (x<j)
	{
		qsort(x, j);
	}
	if (i<y)
	{
		qsort(i, y);
	}
}
void solve() {
	int ans = 0;
	for (int i = 1, t = -1; i <= n; i++) {
		if (beg[i]>=t)
		{
			ans++;
			t = en[i];
		}
	}
	cout << ans << endl;
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
