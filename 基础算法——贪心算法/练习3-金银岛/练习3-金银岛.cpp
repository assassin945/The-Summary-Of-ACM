// 练习3-金银岛.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
struct gold
{
	int t;
	double all, money;
}a[101];
int tu(gold, gold);
int main()
{
	int n, i, w, s;
	cin >> n;
	while (n--)
	{
		double ans = 0;
		cin >> w >> s;
		for (i = 1; i <= s; i++) {
			cin >> a[i].t >> a[i].all;
			a[i].money = a[i].all / (a[i].t * 1.0);
		}
		sort(a + 1, a + s + 1, tu);
		i = 1;
		while ((w - a[i].t >= 0)&&(i <= s))
		{
			ans += a[i].all;
			w -= a[i].t;
			i++;
		}
		if (w<a[i].t&&i<=s)
		{
			ans += (w * a[i].money);
		}
		cout.precision(2);
		cout << fixed << ans << endl;
	}
}
int tu(gold o, gold p) {
	return o.money > p.money;
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
