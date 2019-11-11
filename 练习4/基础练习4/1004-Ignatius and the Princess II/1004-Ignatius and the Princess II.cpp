// 1004-Ignatius and the Princess II.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n, m;
	vector<int> a;
	while (cin>>n>>m)
	{
		a.clear();
		for (int i = 1; i <= n; i++)
		{
			a.push_back(i);
		}
		for (int j = 0; j < m; j++)
		{
			for (int k = a.size() - 2; k >= 0; k--)
			{
				if (a[a.size() - 1] > a[k])
				{
					swap(a[k], a[a.size() - 1]);
					sort(a.begin() + k + 1, a.end());
					break;
				}/*
				else if (a[a.size() - 1] > a[k] && k == a.size() - 1)
				{
					swap(a[k], a[a.size() - 1]);
					break;
				}
				else
				{
					continue;
				}*/
			}
		}
		for (int p = 0; p < a.size(); p++)
		{
			cout << a[p] << " ";
		}
		cout << endl;
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
