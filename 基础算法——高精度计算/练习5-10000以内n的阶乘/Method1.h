#pragma once
#ifndef method1_
#define method1_
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
void method1(int n) {
	int a[40010];
	memset(a, 0, sizeof(a));
	a[1] = 1;
	int cns;
	int len = 1;
	for (int i = 1; i <= n; ++i)
	{
		cns = 0;
		for (int j = 1; j <= len; ++j)
		{
			a[j] = a[j] * i + cns;
			cns = a[j] / 10;
			a[j] = a[j] % 10;
			if (cns > 0 && j >= len)
			{
				len++;
			}
		}
	}
	for (int k = len; k >= 1; k--) {
		cout << a[k];
	}
	cout << endl;
}
#endif // !method1
