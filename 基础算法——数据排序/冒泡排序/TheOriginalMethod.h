#pragma once
#ifndef theOriginalMethod_
#define theOriginalMethod_

#include <iostream>
using namespace std;
void theOriginalMethod(int n, int* arr) {
	int i, j;
	int temp;
	for (i = n - 1; i >= 1; i--) {
		for (j = 0; j < i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}

	for (int k = 0; k < n; k++)
	{
		cout << arr[k] << " ";
	}
	cout << endl;
}

#endif // !theOriginalMethod_
