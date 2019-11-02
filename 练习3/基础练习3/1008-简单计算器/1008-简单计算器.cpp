// 1008-简单计算器.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstring>
#include <stack>
using namespace std;

int main()
{
	char str, c;
	double a, b;
	stack <double> num;
	while (scanf("%lf", &a) != EOF)
	{
		while (!num.empty())
			num.pop();
		c = getchar();
		if (c == '\n' && a == 0)
			break;
		num.push(a);
		scanf("%c", &c);
		while (scanf("%lf", &b))
		{
			if (c == '*')                //优先级高，取数，计算
			{
				a = num.top();
				num.pop();
				num.push(a * b);
			}
			else if (c == '/')           //同上
			{
				a = num.top();
				num.pop();
				num.push(a / b);
			}
			else if (c == '+')           //优先级低，先存入栈
				num.push(b);
			else if (c == '-')          //减法变成加上那个数的负
				num.push(-b);
			c = getchar();
			if (c == '\n')               //结尾
				break;
			scanf("%c", &c);
			getchar();
		}
		double ans = 0.0;
		while (!num.empty())
		{
			ans += num.top();
			num.pop();
		}
		printf("%.2lf\n", ans);
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
