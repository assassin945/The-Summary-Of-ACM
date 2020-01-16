// 练习9-单词接龙.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// 代码有问题

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string s[101], ss;
int l[101], n, maxx;

bool dfs(string, string, int);
void cp(string&, string, int);
void str(string ss);

int main()
{
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> s[i];
	}
	cin >> ss;
	str(ss);
	cout << maxx << endl;
}
bool dfs(string x, string y, int k) {
	int lenx = x.length();
	for (int i = 0; i < k; ++i)
	{
		if (x[lenx - k + i] != y[i])
		{
			return false;
		}
	}
	return true;
}
void cp(string& x, string y, int k) {
	int leny = y.length();
	for (int i = k; i < leny; ++i) {
		x += y[i];
	}
}
void str(string sss) {
	int w = sss.length();
	maxx = max(maxx, w);
	for (int i = 1; i <= n; ++i) {
		if (l[i]>=2)
		{
			continue;
		}
		for (int j = 1; j <= s[i].length(); ++j) {
			if (dfs(ss,s[i],j))
			{
				string t = sss;
				cp(t, s[i], j);
				if (t == sss)
				{
					continue;
				}
				l[i]++;
				str(t);
				l[i]--;
			}
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
