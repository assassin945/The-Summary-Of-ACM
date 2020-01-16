// 练习3-八皇后.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// 代码有问题

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
void js(int);
void sc();

int a[9];
bool b[9], c[17], d[17];
int ans, n;

int main()
{
	memset(b, false, sizeof(b));
	memset(c, false, sizeof(c));
	memset(d, false, sizeof(d));
	int k;
	cin >> k;
	for (int i = 1; i <= k; ++i) {
		ans = 0;
		cin >> n;
		js(1);
	}
	return 0;
}
void js(int i) {
	for (int j = 1; j <= 8; ++j) {
		a[i] = j;
		b[j] = true;
		c[i + j] = true;
		d[i - j + 7] = true;
		if (i == 8)
		{
			sc();
		}
		else
		{
			js(i + 1);
		}
		b[j] = false;
		c[i + j] = false;
		d[i - j + 7] = false;
	}
}
void sc() {
	ans++;
	if (ans == n)
	{
		for (int i = 1; i <= 8; ++i) {
			cout << a[i];
		}
		cout << endl;
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
