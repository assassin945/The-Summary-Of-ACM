#pragma once
#ifndef method2_
#define method2_
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
void method2(char str[]) {
	int n = strlen(str);
	int flag = 0;
	int t;
	for (int k = 2; k <= 9; k++)
	{
		t = 0;
		for (int i = 0; i <= n; i++)
		{
			t = t * 10 + str[i] - 48;
			t %= k;
		}
		if (t == 0)
		{
			flag = 1;
			cout << k << " ";
		}
	}
	if (flag)
	{
		cout << endl;
	}
	else
	{
		cout << "none" << endl;
	}
}
#endif // !method2
