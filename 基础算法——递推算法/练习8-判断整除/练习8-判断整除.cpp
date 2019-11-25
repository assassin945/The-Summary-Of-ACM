// 练习8-判断整除.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// 


#include<iostream>
#include<cstring>
using namespace std;
int a[10100];
int dp[10100][110];
int main()
{
	int n, k, i, j;
	memset(dp, 0, sizeof(dp));

	cin >> n >> k;
	for (i = 1; i <= n; i++)
		cin >> a[i];
	dp[0][0] = 1;
	for (i = 1; i <= n; i++)
		for (j = 0; j < k; j++)
			//此步有疑问
			dp[i][j] = dp[i - 1][(j + a[i]) % k] || dp[i - 1][(j - a[i] % k + k) % k];
	if (dp[n][0] == 0)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
	return 0;

	/*
	int n, k, temp, counter = 0;
	vector<int> f;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> temp;
		if (temp % 2 != 0)
		{
			counter++;
		}
		f.push_back(temp);
	}
	if (n % 2 == 0 && counter % 2 != 0)
	{
		cout << "NO" << endl;
	}
	else if (n % 2 != 0 && counter % 2 == 0)
	{
		cout << "NO" << endl;
	}
	else {
		cout << -4 % 3 << endl;
	}*/
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
