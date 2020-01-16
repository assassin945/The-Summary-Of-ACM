// 练习10-分成互质组.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <algorithm>
#define N 20
using namespace std;
int n;
int a[N];
int cnt = 99999;
long long vis[N];
long long gcd(long long, long long);
void dfs(int, int);
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		vis[i] = 1;
	}
	sort(a + 1, a + 1 + n);
	dfs(1, 1);
	cout << cnt << endl;
}

long long gcd(long long a, long long b) {
	if (b == 0)
	{
		return a;
	}
	return gcd(b, a % b);
}

void dfs(int k, int step) {
	if (step == n + 1)
	{
		if (k < cnt)
		{
			cnt = k;
		}
		return;
	}
	for (int i = 1; i <= k; i++) {
		if (gcd(vis[i],a[step]))
		{
			vis[i] *= a[step];
			dfs(k, step + 1);
			vis[i] /= step;
		}
	}
	vis[k + 1] *= a[step];
	dfs(k + 1, step + 1);
	vis[k + 1] /= a[step];
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
