﻿// 练习1-2011.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// 此题算法在n很大的时候失效

#include <iostream>
using namespace std;
char n[201];
int main()
{
	int k, len, p, q;
    cin >> k;
	while (k--)
	{
		cin >> n;
		len = strlen(n);
		q = 0;
		for (int i = len - 4; i < len; i++)
		{
			if (i >= 0)
			{
				q = q * 10 + (n[i] - '0');
			}
		}
		p = 2011;
		int j = 1;
		do
		{
			if (j * 2 <= q)
			{
				j *= 2;
				p = (p * p) % 10000;
			}
		} while (j * 2 <= q);
		for (; j < q; j++) {
			p = (p * 2011) % 10000;
		}
		cout << p << endl;
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
