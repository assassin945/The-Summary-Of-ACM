﻿// 1002-Reverse Number.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>  
#include <cstring>  
int main()
{
	int t;
	char s[117];
	scanf("%d", &t);
	while (t--)
	{
		scanf("%s", s);
		int k = 0;
		int len = strlen(s);
		if (s[0] == '-')
			printf("-");
		int flag = 0;
		for (int i = len - 1; i >= 0; i--)
		{
			if (s[i] == '0' && flag == 0)
				k++;
			else if (s[i] == '-')
				continue;
			else
			{
				flag = 1;
				printf("%c", s[i]);
			}
		}
		for (int i = 0; i < k; i++)
			printf("0");
		printf("\n");
	}
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
