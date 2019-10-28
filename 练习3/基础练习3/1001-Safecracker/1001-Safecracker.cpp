// 1001-Safecracker.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int num, flag, i, j, k, l, m;
	int tag[15];
	char str[15], ans[8];
	while (cin >> num >> str && num)
	{
		int length = strlen(str);
		flag = 1;
		memset(tag, 0, sizeof(tag));
		for (i = 0; i < length; i++)
		{
			tag[i] = str[i] - 'A' + 1;
		}
		sort(tag, tag + length);
		for (i = 0; i < length; i++) {
			for (j = 0; j < length; j++) {
				if (j != i) {
					for (k = 0; k < length; k++) {
						if (k != j && k != i) {
							for (l = 0; l < length; l++) {
								if (l != k && l != j && l != i) {
									for (m = 0; m < length; m++)
									{
										if (m != l && m != k && m != j && m != i &&
											tag[i] - tag[j] * tag[j] + tag[k] * tag[k] * tag[k]
											- tag[l] * tag[l] * tag[l] * tag[l]
											+ tag[m] * tag[m] * tag[m] * tag[m] * tag[m] == num)
										{
											flag = 0;
											ans[0] = tag[i] - 1 + 'A';
											ans[1] = tag[j] - 1 + 'A';
											ans[2] = tag[k] - 1 + 'A';
											ans[3] = tag[l] - 1 + 'A';
											ans[4] = tag[m] - 1 + 'A';
											ans[5] = '\0';
										}
									}
								}
							}
						}
					}
				}
			}
		}

		if (flag)
			cout << "no solution" << endl;
		else
			cout << ans << endl;
	}
	return 0;
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
