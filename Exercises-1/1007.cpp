// 1007-A  + B.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include<iostream>
#include<map>
#include<cstring>
using namespace std;

map<string, int>m;

int main()
{
	m["zero"] = 0;
	m["one"] = 1;
	m["two"] = 2;
	m["three"] = 3;
	m["four"] = 4;
	m["five"] = 5;
	m["six"] = 6;
	m["seven"] = 7;
	m["eight"] = 8;
	m["nine"] = 9;
	m["+"] = 10;
	m["="] = 11;
	int cnt[2] = { 0 };
	char a[20];
	int k = 0; int z = 0;
	int sum[2] = { 0 };
	while (cin >> a)
	{
		int d = m[a];
		if (d < 10) cnt[k++] = d;
		if (d == 10)
		{
			if (k == 1) sum[0] = cnt[0];
			else if (k == 2) sum[0] = 10 * cnt[0] + cnt[1];
			k = 0;
		}
		if (d == 11)
		{
			if (k == 1) sum[1] = cnt[0];
			else if (k == 2) sum[1] = 10 * cnt[0] + cnt[1];
			k = 0;
			if (sum[0] + sum[1] == 0) break;
			else cout << sum[0] + sum[1] << endl;
		}
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
