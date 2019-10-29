// 1006-Booklet Printing.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int s[500][4];
int main()
{
	int P, i;
	int M, N, l, r;
	while (scanf("%d", &P) != EOF)
	{
		if (P == 0) return 0;
		N = (P - 1) / 4 + 1;
		M = 4 * N;
		l = 1, r = M;
		for (i = 1; i <= N; i++)
		{
			s[i][0] = r--;
			s[i][1] = l++;
			s[i][2] = l++;
			s[i][3] = r--;
		}
		printf("Printing order for %d pages:\n", P);
		for (i = 1; i <= N; i++)
		{
			if (!(s[i][0] > P && s[i][1] > P))
			{
				printf("Sheet %d, front:", i);
				if (s[i][0] > P) printf(" Blank, ");
				else printf(" %d, ", s[i][0]);
				if (s[i][1] > P) printf("Blank\n");
				else printf("%d\n", s[i][1]);
			}
			if (!(s[i][2] > P && s[i][3] > P))
			{
				printf("Sheet %d, back :", i);
				if (s[i][2] > P) printf(" Blank, ");
				else printf(" %d, ", s[i][2]);
				if (s[i][3] > P) printf("Blank\n");
				else printf("%d\n", s[i][3]);
			}
		}
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
