#pragma once
#ifndef method1_
#define method1_

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

void method1(char str[]) {
	int a[31];
	int x[8];
	int res[8];
	memset(a, 0, sizeof(a));
	memset(x, 0, sizeof(x));
	memset(res, 0, sizeof(res));

	int count = 0;
	int len = strlen(str);
	if (len == 0)
	{
		return;
	}
	//字符转换并存入数组a
	for (int i = 0; i < len; i++)
	{
		a[i] = (str[i] - '0');
	}
	//核心算法，对输入内容按位取余
	for (int k = 0; k < len; k++)
	{
		x[0] = (x[0] * 10 + a[k]) % 2;
		x[1] = (x[1] * 10 + a[k]) % 3;
		x[2] = (x[2] * 10 + a[k]) % 4;
		x[3] = (x[3] * 10 + a[k]) % 5;
		x[4] = (x[4] * 10 + a[k]) % 6;
		x[5] = (x[5] * 10 + a[k]) % 7;
		x[6] = (x[6] * 10 + a[k]) % 8;
		x[7] = (x[7] * 10 + a[k]) % 9;
	}
	//将能够整除的数字存进数组
	for (int p = 0; p < 8; p++)
	{
		if (x[p] == 0)
		{
			res[count++] = p + 2;
		}
	}
	//输出结果
	if (count == 0)
	{
		cout << "none" << endl;
	}
	else {
		for (int q = 0; q < count; q++)
		{
			cout << res[q];
			if (q < count - 1)
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}
#endif // method1_

