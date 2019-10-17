// 例1.4-高精度除法.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
	char a1[100];
	int a[100], b, c[100];
	int lena, lenc;
	int x = 0;
	memset(a, 0, sizeof(a));
	memset(c, 0, sizeof(c));

	gets_s(a1);
	cin >> b;
	lena = strlen(a1);

	for (int i = 0; i < lena; i++)
	{
		a[i + 1] = a1[i] - 48;
	}
	for (int j = 1; j <= lena; j++)
	{
		c[j] = (x * 10 + a[j]) / b;
		x = (x * 10 + a[j]) % b;
	}

	lenc = 1;
	while (c[lenc] == 0 && lenc < lena)
	{
		lenc++;
	}

	for (int k = lenc; k <= lena; k++)
	{
		cout << c[k];
	}
	cout << endl;
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
