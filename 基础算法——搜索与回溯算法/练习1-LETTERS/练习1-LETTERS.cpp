﻿// 练习1-LETTERS.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int fx[4] = { 0,1,0,-1 };
int fy[4] = { -1,0,1,0 };
int ans = 0,n,m;
int d[200][200];
char a[200][200];
bool used[40001];

void dfs(int, int, int);

int main()
{
	memset(used, false, sizeof(used));
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
	used[a[1][1]] = true;
	dfs(1, 1, 1);
	cout << ans << endl;

}
void dfs(int x, int y, int z) {
	ans = max(ans, z);
	for (int i = 0; i < 4; i++)
	{
		int xx = x + fx[i];
		int yy = y + fy[i];
		if (xx <= n && xx > 0 && yy <= m && yy > 0 && !used[a[xx][yy]])
		{
			used[a[xx][yy]] = true;
			dfs(xx, yy, z+1);
			used[a[xx][yy]] = false;
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
