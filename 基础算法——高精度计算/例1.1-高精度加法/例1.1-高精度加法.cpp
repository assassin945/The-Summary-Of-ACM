#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;
int main() {
	char a1[100], b1[100];
	int a[100], b[100], c[100];
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
	if (c[lenc] == 0)
	{
		lenc--;
	}
	for (int k = lenc; k >= 0; k--)
	{
		cout << c[k];
	}
	cout << endl;
	return 0;
}
