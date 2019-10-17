#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
int main() {
	int a[256], b[256], c[256];
	int lena, lenb, lenc;
	char n[256], n1[256], n2[256];
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	memset(c, 0, sizeof(c));

	cout << "Input minuend:";
	gets_s(n1);
	cout << "Input subtrahend:";
	gets_s(n2);

	if (strlen(n1) < strlen(n2) || (strlen(n1) == strlen(n2) && strcmp(n1, n2) < 0)) //strcmp()为字符串比较函数，当n1 == n2时，返回0
	{                                                                               //n1>n2时，返回正整数；n1<n2时，返回负整数
																					//处理被减数与减数，交换被减数和减数
		strcpy_s(n, n1);                                                            //将n1数组的值完全赋给数组n
		strcpy_s(n1, n2);
		strcpy_s(n2, n);
		cout << "-";
	}

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