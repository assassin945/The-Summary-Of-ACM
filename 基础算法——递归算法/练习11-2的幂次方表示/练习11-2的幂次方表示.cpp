// 练习11-2的幂次方表示.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int f(int);
int n, a[17];
int main()
{
	a[0] = 1;
	for (int i = 1; i < 17; i++)
	{
		a[i] = a[i - 1] * 2;
	}
	scanf("%d", &n);
	f(n);
}
int f(int x) {
	if (x == 0)
	{
		printf("0");
		return 0;
	}
	if (x == 2)
	{
		printf("2");
		return 0;
	}
	while (1)
	{
		int i;
		for (i = 16; a[i] > x; i--);
		if (a[i] != 2)
		{
			printf("2(");
			f(i);
			printf(")");
		}
		else
		{
			printf("2");
		}
		if (x - a[i])
		{
			printf("+");
			x = x - a[i];
		}
		else {
			return 0;
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
