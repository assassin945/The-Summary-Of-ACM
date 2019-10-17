#pragma once
#ifndef method2_
#define method2_
#include <cstdio>
#include <iostream>
using namespace std;
void method2(int n) {
	int t;
	int l = 1;
	int a[40010];
	memset(a, 0, sizeof(a));
	a[1] = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= l; j++)
		{
			a[j] *= i;
			a[j] += a[j - 1] / 10;
			a[j - 1] %= 10;
			if (a[j]>9&&j>=l)
			{
				l++;
			}
		}
	}
	for (int k = l; k >= 1; k--)
	{
		cout << a[k];
	}
	cout << endl;
}
#endif // !method2_

