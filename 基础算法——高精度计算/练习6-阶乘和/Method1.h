#pragma once
#ifndef method1_
#define method1_
#include <iostream>
#include <cstring>
using namespace std;
int a[10010], b[20010];
int len = 1;
int anslen;
void method1(int n) {
	for (int i = n; i >= 1; i--)
	{
		jiecheng(n);
	}

}

void jiecheng(int m) {
	memset(a, 0, sizeof(a));
	a[1] = 1;
	for (int i = 1; i <= len; ++i) {
		a[i] *= m;
	}

	
}

void jiafa() {
	for (int i = 0; i <= len; ++i)
	{

	}
}
#endif // !method1_
