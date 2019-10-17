#pragma once
#ifndef theAdvancedMethod_
#define theAdvancedMethod_

#include <iostream>
using namespace std;
void theAdvacedMethod(int n, int arr[]) {
	int i, j;
	int temp;
	bool flag;
	for (i = n - 1; i >= 1; i--) {
		flag = true;
		for (j = 0; j < i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
				flag = false;
			}
		}
		if (flag)
		{
			break;
		}
	}

	for (int k = 0; k < n; k++)
	{
		cout << arr[k] << " ";
	}
	cout << endl;
}
#endif // !theAdvancedMethod_
