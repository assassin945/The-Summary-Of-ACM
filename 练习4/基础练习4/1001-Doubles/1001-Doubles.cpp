// 1001-Doubles.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int fac[] = { 1,1,2,6,24,120,720,5040,40320 };
// 存储答案
int ans[10001], len;
// 康托展开的逆   n为要对几位数排序，k为第几个数，num为这n个数应该从多少开始
void reverse_kangtuo(int n, int k, int num)
{
	int i, j, t, vst[11] = { 0 };
	char s[11];

	--k;
	for (i = 0; i < n; i++)
	{
		t = k / fac[n - i - 1];
		for (j = 1; j <= n; j++)
			if (!vst[j])
			{
				if (t == 0) break;
				--t;
			}
		s[i] = '0' + j;
		vst[j] = 1;
		k %= fac[n - i - 1];
	}
	// 排序后的赋给答案数组
	for (int kk = 0; kk < n; ++kk)
		ans[len++] = s[kk] - '1' + num;
}

int main()
{
	int n, m;
	int i, j, temp1, temp2;
	while (cin >> n >> m)
	{
		i = 1;
		len = 0;
		if (n > 8)
		{
			temp1 = n % 8;
			temp2 = (n / 8 - 1) * 8;
			// 相应答案赋值
			for (; i <= temp1; ++i)
				ans[len++] = i;
			for (j = 0; j < temp2; ++j, ++i)
				ans[len++] = i;
			reverse_kangtuo(8, m, i);
		}
		else    reverse_kangtuo(n, m, i);

		// 输出，注意最后一个数后面没有空格
		for (i = 0; i < len - 1; ++i)
			cout << ans[i] << " ";
		cout << ans[len - 1] << endl;
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
