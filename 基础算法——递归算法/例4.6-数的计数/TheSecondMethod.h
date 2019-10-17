#pragma once
#ifndef theSecondMethod_
#define theSecondMethod_

#include <iostream>
using namespace std;
int h[1001];
void init(int n) {
	for (int i = 1; i <= n; i++) {
		h[i] = -1;
	}
}

void theSecondMethod(int m) {
	init(m);
	int i;
	if (h[m] != -1)
	{
		return;
	}
	h[m] = 1;
	for (i = 1; i <= m / 2; i++) {
		theSecondMethod(i);
		h[m] += h[i];
	}
}
#endif // !theSecondMethod_
