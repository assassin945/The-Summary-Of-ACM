#pragma once
#ifndef mergeSort_
#define mergeSort_

#include <iostream>
#include <vector>
using namespace std;
void mergeSort(vector<int>& a, int s, int t) {
	if (s == t)
	{
		return;
	}
	int mid = (s + t) / 2;
	mergeSort(a, s, mid);
	mergeSort(a, mid + 1, t);
	int i = s;
	int j = mid + 1;
	int k = s;
	int* res = new int[a.size()];
	while (i <= mid && j <= t)
	{
		if (a[i]<=a[j])
		{
			res[k] = a[i];
			k++;
			i++;
		}
		else
		{
			res[k] = a[j];
			k++;
			j++;
		}
	}
	while (i <= mid)
	{
		res[k] = a[i];
		k++;
		i++;
	}
	while (j <= t)
	{
		res[k] = a[j];
		k++;
		j++;
	}
	for (int i = s; i <= t; i++) {
		a[i] = res[i];
	}
}
#endif // !mergeSort_
