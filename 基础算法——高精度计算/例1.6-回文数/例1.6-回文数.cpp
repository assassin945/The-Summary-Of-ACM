// 例1.6-回文数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
using namespace std;
int n, a[101], b[101], ans;
void init(int a[]) {
	string s;
	cin >> n >> s;
	memset(a, 0, sizeof(a));
	a[0] = s.length();
	for (int i = 1; i <= a[0]; i++)
	{
		if (s[a[0] - i] >= '0' && s[a[0] - i] <= '9')
		{
			a[i] = s[a[0] - i] - '0';
		}
		else {
			a[i] = s[a[0] - i] - 'A' + 10;
		}
	}
}

bool check(int a[]) {
	for (int i = 1; i <= a[0]; i++) {
		if (a[i] != a[a[0] - i + 1])
		{
			return false;
		}
		return true;
	}
}

void jia(int a[]) {
	for (int i = 1; i <= a[0]; i++) {
		b[i] = a[a[0] - i + 1];
	}
	for (int j = 1; j <= a[0]; j++) {
		a[j] += b[j];
	}
	for (int k = 1; k <= a[0]; k++) {
		a[k + 1] += a[k] / n;
		a[k] %= n;
	}
	if (a[a[0] + 1] > 0)
	{
		a[0]++;
	}
}
int main()
{
	init(a);
	if (check(a))
	{
		cout << 0 << endl;
		return 0;
	}
	ans = 0;
	while (ans <= 30)
	{
		ans++;
		jia(a);
		if (check(a))
		{
			cout << ans << endl;
			return 0;
		}
	}
	cout << "Impossible" << endl;
	return 0;
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
