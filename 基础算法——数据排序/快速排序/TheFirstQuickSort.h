#pragma once
#ifndef theFirstQuickSort_
#define theFirstQuickSort_

#include <iostream>
using namespace std;
void theFirstQuickSort(int* a, int left, int right) {
	int i = left;
	int j = right;
	int temp = 0;
	int mid = a[(left + right) / 2];
	do
	{
		while (a[i] < mid)
		{
			i++;
		}
		while (a[j] > mid)
		{
			j--;
		}
		if (i <= j)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	} while (i <= j);
	if (left < j)
	{
		theFirstQuickSort(a, left, j);
	}
	if (i < right)
	{
		theFirstQuickSort(a, i, right);
	}
}
#endif // !theFirstQuickSort_
