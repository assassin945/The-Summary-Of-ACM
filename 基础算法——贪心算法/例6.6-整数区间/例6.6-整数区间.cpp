﻿// 例6.6-整数区间.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int a[1001], b[1001], sum = 0, n, m;
void qsort(int, int);
int main()
{
	while (cin>>n && n > 0)
	{
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i] >> b[i];
		}
		qsort(1, n);
		for (int j = 1, x = -1; j <= n; j++) {
			if (x>=a[j])
			{
				continue;
			}
			sum++;
			x = b[j];
		}
		cout << sum << endl;
	}
}

void qsort(int x, int y) {
	int i = x;
	int j = y;
	int mid1 = b[(x + y) / 2];
	int mid2 = a[(x + y) / 2];
	int t;
	while (i<=j)
	{
		while (b[i]<mid1 || ((b[i]==mid1)&&(a[i]==mid2)))
		{
			i++;
		}
		while (b[i] > mid1 || ((b[i] == mid1) && (a[i] == mid2)))
		{
			j++;
		}
		if (i <= j)
		{
			t = b[j];
			b[j] = b[i];
			b[i] = t;

			t = a[j];
			a[j] = a[i];
			a[i] = t;

			i++;
			j--;
		}
	}
	if (x < j)
	{
		qsort(x, j);
	}
	if (i < y)
	{
		qsort(i, y);
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
