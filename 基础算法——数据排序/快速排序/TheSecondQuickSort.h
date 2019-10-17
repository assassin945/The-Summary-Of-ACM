#pragma once
#ifndef theSecondQuickSort_
#define theSecondQuickSort_

#include <iostream>
using namespace std;
void theSecondQuickSort(int *a, int start, int last)
{
	int i = start;
	int j = last;
	int temp = a[i];
	if (i < j)
	{
		while (i < j)
		{
			while (i < j && a[j] >= temp)
				j--;
			if (i < j)
			{
				a[i] = a[j];
				i++;
			}

			while (i < j && temp > a[i])
				i++;
			if (i < j)
			{
				a[j] = a[i];
				j--;
			}

		}
		//�ѻ�׼���ŵ�iλ��
		a[i] = temp;
		//�ݹ鷽��
		theSecondQuickSort(a,start, i - 1);
		theSecondQuickSort(a,i + 1, last);
	}
}
#endif // !theSecondQuickSort_
