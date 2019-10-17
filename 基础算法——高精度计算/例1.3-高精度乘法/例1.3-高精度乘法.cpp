#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;
int main() {
	char a1[101], b1[101];
	int a[101], b[101], c[10001];
	int lena, lenb, lenc;
	int x;
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	memset(c, 0, sizeof(c));

	cin >> a1;
	cin >> b1;

	lena = strlen(a1);
	lenb = strlen(b1);
	for (int i = 0; i < lena; i++)
	{
		a[lena - i] = a1[i] - 48;
	}
	for (int j = 0; j < lenb; j++)
	{
		b[lenb - j] = b1[j] - 48;
	}

	for (int m = 1; m <= lena; m++)
	{
		x = 0;			//用于存放进位
		for (int n = 1; n <= lenb; n++)			//对乘数的每一位进行处理
		{
			c[m + n - 1] = a[m] * b[n] + x + c[m + n - 1];			//当前乘积+上次乘积进位+原数
			x = c[m + n - 1] / 10;
			c[m + n - 1] %= 10;
		}
		c[m + lenb] = x;			//进位
	}

	lenc = lena + lenb;
	while (c[lenc] == 0 && lenc > 1)			//删除前导0
	{
		lenc--;
	}

	for (int k = lenc; k >= 1 ; k--)			//输出结果
	{
		cout << c[k];
	}
	cout << endl;
	return 0;
}