// 练习9-最小新整数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int t, k, m;
	string n;
	cin >> t;
	for (int l = 1; l <= t; ++l)
	{
		cin >> n >> k;
		m = n.size();
		for (int i = 1; i <= k; ++i) {
			for (int j = 0; j < m - 1; ++j) {
				if (n[j] > n[j+1])
				{
					for (int x = j; x < m - 1; ++x) {
						n[x] = n[x + 1];
					}
					break;
				}
			}
			m--;
		}
		for (int i = 0; i < m; ++i) {
			cout << n[i];
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
