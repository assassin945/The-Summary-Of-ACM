// 例8.3-最少步数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
using namespace std;
int dx[12] = { -2,-2,-1,1,2,2,2,2,1,-1,-2,-2 };
int dy[12] = { -1,-2,-2,-2,-2,-1,1,2,2,2,2,1 };
int main()
{
	int s[101][101], que[10000][4] = { 0 }, x1, x2, y1, y2;
	memset(s, 0xff, sizeof(s));
	int head = 1;
	int tail = 1;
	que[1][1] = 1;
	que[1][2] = 1;
	que[1][3] = 0;
	cin >> x1 >> y1 >> x2 >> y2;
	while (head<=tail)
	{
		for (int d = 0; d <= 11; d++) {
			int x = que[head][1] + dx[d];
			int y = que[head][2] + dy[d];
			if (x>0 && y>0)
			{
				if (s[x][y] == -1)
				{
					s[x][y] = que[head][3] + 1;
					tail++;
					que[tail][1] = x;
					que[tail][2] = y;
					que[tail][3] = s[x][y];
					if (s[x1][y1] > 0 && s[x2][y2] > 0)
					{
						cout << s[x1][y1] << endl;
						cout << s[x2][y2] << endl;
						return 0;
					}
				}
			}
		}
		head++;
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
