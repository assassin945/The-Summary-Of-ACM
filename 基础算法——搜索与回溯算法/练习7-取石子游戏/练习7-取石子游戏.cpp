// 练习7-取石子游戏.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// 此题亦可算作博弈论相关问题

#include <iostream>
using namespace std;
bool dfs(int, int);

int main()
{
	int a, b;
	while (cin>>a>>b)
	{
		if (a == 0 || b == 0)
		{
			break;
		}
		if (dfs(a,b))
		{
			cout << "win" << endl;
		}
		else
		{
			cout << "lose" << endl;
		}
	}
}
bool dfs(int a, int b) {
	if (a < b)
	{
		swap(a, b);
	}
	if (a % b == 0)
	{
		return true;
	}
	for (int i = a / b; i >= 1; i--) {
		if (!dfs(a-b*i,b))
		{
			return true;
		}
	}
	return false;
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
