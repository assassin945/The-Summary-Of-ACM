// 例7.2-快速排序（QuickSort）.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int a[1001];
void qsort(int, int);
int main()
{
	int n;
	while (cin>>n && n!=0)
	{
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		qsort(1, n);
		for (int j = 1; j <= n; j++)
		{
			cout << a[j] << " ";
		}
		cout << endl;
	}
}
void qsort(int le, int ri) {
	int i = le;
	int j = ri;
	int mid = a[(le + ri) / 2];
	while (i <= j)
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
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}
	if (le < j)
	{
		qsort(le, j);
	}
	if (i < ri)
	{
		qsort(i, ri);
	}
}
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
