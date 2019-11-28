#pragma once
#ifndef method2_
#define method2_
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
char a[101], aa[101];
int up(int);
void method2() {
	while (scanf("%s",a)!=EOF)
	{
		printf("%s\n", a);
		int n = strlen(a);
		memset(aa, ' ', sizeof(aa));
		for (int i = 0; i < n; i++)
		{
			if (a[i] == '(')
			{
				aa[i] = '$';
			}
			else if (a[i] == ')')
			{
				int m = up(i - 1);
				if (m == -1)
				{
					aa[i] = '?';
				}
				else {
					aa[m] = ' ';
				}
			}
		}
		printf("%s", aa);
	}
}
int up(int d) {
	if (d == -1)
	{
		return -1;
	}
	else if (aa[d] == '$')
	{
		return d;
	}
	else
	{
		return up(d - 1);
	}
}
#endif // !method2_
