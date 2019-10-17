// 练习1-大整数加法.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
using namespace std;
void jia(int p[], int q[]) {

}
int main()
{
	char a1[201], b1[201];
	int a[201], b[201], c[201];
	int lena, lenb, lenc;
	int x;
	memset(a, 0, sizeof(a));          //初始化数组
	memset(b, 0, sizeof(b));
	memset(c, 0, sizeof(c));

	gets_s(a1);             //获取加数与被加数
	gets_s(b1);
	lena = strlen(a1);
	lenb = strlen(b1);

	for (int i = 0; i <= lena - 1; i++)
	{
		a[lena - i] = a1[i] - 48;           //加数放入数组a
	}
	for (int j = 0; j <= lenb - 1; j++)
	{
		b[lenb - j] = b1[j] - 48;           //被加数放入数组b
	}

	lenc = 1;
	x = 0;
	while (lenc <= lena || lenc <= lenb)
	{
		c[lenc] = a[lenc] + b[lenc] + x;            //两数相加
		x = c[lenc] / 10;
		c[lenc] %= 10;
		lenc++;
	}

	c[lenc] = x;            //处理最高位
	while (c[lenc] == 0 && lenc > 1)
	{
		lenc--;
	}
	for (int k = lenc; k >= 1; --k)
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
