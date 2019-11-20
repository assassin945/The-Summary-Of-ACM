// 练习8-病人排队.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int n, x = 0, y = 0, a[101], b[101], p[101];
string s, bs[101], cs[101];
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> s >> a[i];
		if (a[i] >= 60)
		{
			x++;
			b[x] = a[i];
			bs[x] = s;
			p[x] = x;
		}
		else
		{
			y++;
			cs[y] = s;
		}
	}
	for (int j = 1; j < x; j++) {
		for (int k = j + 1; k <= x; k++) {
			if (b[j] < b[k])
			{
				swap(b[j], b[k]);
				swap(bs[j], bs[k]);
				swap(p[j], p[k]);
			}
			if ((b[j] == b[k]) && (p[j] > p[k]))
			{
				swap(b[j], b[k]);
				swap(bs[j], bs[k]);
				swap(p[j], p[k]);

			}
		}
	}
	for (int l = 1; l <= x; l++) {
		cout << bs[l] << endl;
	}
	for (int m = 1; m <= y; m++) {
		cout << cs[m] << endl;
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
