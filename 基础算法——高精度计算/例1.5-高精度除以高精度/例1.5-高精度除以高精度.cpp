// 例1.5-高精度除以高精度.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>

using namespace std;
void init(int a[]) {
	string s;
	cin >> s;
	a[0] = s.length();
	for (int i = 1; i <= a[0]; i++)
	{
		a[i] = s[a[0] - i] - '0';
	}
}

void print(int a[]) {
	if (a[0] == 0)
	{
		cout << 0 << endl;
		return;
	}
	for (int i = a[0]; i > 0; i--)
	{
		cout << a[i];
	}
	cout << endl;
	return;
}

int compare(int a[], int b[]) {
	if (a[0] > b[0])
	{
		return 1;
	}
	if (a[0] < b[0])
	{
		return -1;
	}
	for (int i = a[0]; i > 0; i--) {
		if (a[i] > b[i])
		{
			return -1;
		}
		if (a[i] < b[i])
		{
			return -1;
		}
	}
	return 0;
}

void jian(int a[], int b[]) {
	int flag = compare(a, b);
	if (flag == 0)
	{
		a[0] = 0;
		return;
	}
	if (flag == 1)
	{
		for (int i = 1; i <= a[0]; i++)
		{
			if (a[i] < b[i])
			{
				a[i + 1]--;
				a[i] += 10;
			}
			a[i] -= b[i];
		}
		while (a[0] > 0 && a[a[0]] == 0)
		{
			a[0]--;
		}
		return;
	}
}

void numcpy(int p[], int q[], int det) {
	for (int i = 1; i <= p[0]; i++)
	{
		q[i + det - 1] = p[i];
	}
	q[0] = p[0] + det - 1;
}

void chugao(int a[], int b[], int c[]) {
	int tmp[101];
	c[0] = a[0] - b[0] + 1;
	for (int i = c[0]; i > 0; i--) {
		memset(tmp, 0, sizeof(tmp));
		numcpy(b, tmp, i);
		while (compare(a,tmp) >= 0)
		{
			c[i]++;
			jian(a, tmp);
		}
		while (c[0] > 0 && c[c[0]] == 0)
		{
			c[0]--;
		}
		return;
	}
}

int main()
{
	int a[101], b[101], c[101];
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	memset(c, 0, sizeof(c));
	init(a);
	init(b);
	chugao(a, b, c);
	print(c);
	print(a);
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
