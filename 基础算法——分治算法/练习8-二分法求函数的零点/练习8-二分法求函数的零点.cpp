// 练习8-二分法求函数的零点.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
double f(double);
int main()
{
    double l = 1.5, r = 2.4;
	double m;
	while (l<r-0.000001)
	{
		m = (l + r) / 2.0;
		if (f(m) > 0.0)
		{
			l = m;
		}
		if (f(m) < 0.0)
		{
			r = m;
		}
	}
	cout.precision(6);
	if (f(l) == 0.0)
	{
		cout << fixed << l << endl;
	}
	else
	{
		cout << fixed << r << endl;
	}
}
double f(double x) {
	return x * x * x * x * x - 15.0 * x * x * x * x + 85.0 * x * x * x - 225.0 * x * x + 274.0 * x - 121.0;
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
