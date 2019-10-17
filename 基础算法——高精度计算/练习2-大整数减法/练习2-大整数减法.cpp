// 练习2-大整数减法.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
int main() {
	int a[201], b[201], c[201];
	int lena, lenb, lenc;
	char n1[201], n2[201];
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	memset(c, 0, sizeof(c));

	gets_s(n1);
	gets_s(n2);

	lena = strlen(n1);
	lenb = strlen(n2);
	for (int i = 0; i <= lena - 1; i++)
	{
		a[lena - i] = int(n1[i] - '0');            //被减数放入数组a
	}
	for (int j = 0; j <= lenb - 1; j++)
	{
		b[lenb - j] = int(n2[j] - '0');             //减数放入数组b
	}

	int k = 1;
	while (k <= lena || k < lenb)
	{
		if (a[k] < b[k]) {
			a[k] += 10;             //不够减，则向最高位借一位
			a[k + 1]--;
		}
		c[k] = a[k] - b[k];
		k++;
	}

	lenc = k;
	while ((c[lenc] == 0) && (lenc > 1))
	{
		lenc--;             //处理最高位，为零则不输出
	}

	for (int m = lenc; m >= 1; m--)             //输出计算结果
	{
		cout << c[m];
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
