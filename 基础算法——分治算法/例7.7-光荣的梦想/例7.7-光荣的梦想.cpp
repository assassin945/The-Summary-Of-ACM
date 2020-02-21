// 例7.7-光荣的梦想.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int temp[1001], a[1001], tot = 0;
void merge_sort(int, int);
int main()
{
    int n;
    cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	merge_sort(1, n);
	cout << tot << endl;
}
void merge_sort(int left, int right) {
	if (left == right)
	{
		return;
	}
	int mid = (left + right) / 2;
	merge_sort(left, mid);
	merge_sort(mid + 1, right);
	int p = left, i = left, j = mid + 1;
	while (i <= mid && j <= right)
	{
		if (a[i] > a[j])
		{
			tot = tot + mid - i + 1;
			temp[p++] = a[j++];
		}
		else
		{
			temp[p++] = a[i++];
		}
		while (i <= mid)
		{
			temp[p++] = a[i++];
		}
		while (j <= right)
		{
			temp[p++] = a[j++];
		}
		for (i = left; i <= right; i++) {
			a[i] = temp[i];
		}
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
