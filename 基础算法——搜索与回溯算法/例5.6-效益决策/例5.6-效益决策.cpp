// 例5.6-效益决策.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <iomanip>
using namespace std;
int d[6][6] = {
	{0,0,0,0,0,0},
	{0,13,11,10,4,7},
	{0,13,10,10,8,5},
	{0,5,9,7,7,4},
	{0,15,12,10,11,5},
	{0,10,11,8,8,4}
};
int maxl = 0;
int g[10], f[10];
bool p[6] = { 0 };

void go(int, int);

int main()
{
	go(1, 0);
	for (int i = 1; i <= 5; i++) {
		cout << char(64 + i) << ":J" << g[i] << setw(3);
	}
	cout << endl;
	cout << "supply:" << maxl << endl;
}

void go(int step, int t) {
	for (int i = 1; i <= 5; i++) {
		if (!p[i])
		{
			f[step] = i;
			p[i] = 1;
			t += d[step][i];
			if (step < 5)
			{
				go(step + 1, t);
			}
			else if (t > maxl)
			{
				maxl = t;
				for (int j = 1; j <= 5; j++)
				{
					g[j] = f[j];
				}
			}
			t -= d[step][i];
			p[i] = 0;
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
