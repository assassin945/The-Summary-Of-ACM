// 练习4-迷宫.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
int t, n, x, y, nx, ny, m;
int xx, yy;
char str;
bool pd, flag[101][101];

void dfs(int, int);
int main()
{
	cin >> m;
	for (int t = 1; t <= m; t++) {
		memset(flag, false, sizeof(flag));
		pd = false;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> str;
				if (str == '#')
				{
					flag[i][j] = true;
				}
			}
		}
		cin >> x >> y >> xx >> yy;
		if (flag[x][y] || flag[xx][yy])
		{
			cout << "NO" << endl;
			continue;
		}
		else
		{
			dfs(x, y);
		}
		if (!pd)
		{
			cout << "NO" << endl;
		}
	}
}
void dfs(int x, int y) {
	for (int i = 0; i < 4; i++)
	{
		nx = x + dx[i];
		ny = y + dy[i];
		if (nx >= 0 && nx < n && ny >= 0 && ny < n && !flag[nx][ny])
		{
			cout << "YES" << endl;
			pd = true;
			break;
		}
		else
		{
			dfs(nx, ny);
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
