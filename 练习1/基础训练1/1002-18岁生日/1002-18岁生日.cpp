#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	int n;
	int year;
	int month;
	int day;
	int sumday;
	cin >> n;
	while (n--)
	{
		sumday = 0;
		scanf("%d-%d-%d", &year, &month, &day);
		if (month == 2 && day == 29)
		{
			cout << -1 << endl;
			continue;
		}
		if ((month == 2 && day <= 28)||month==1)
		{
			for (int i = year; i < year + 18; i++) {
				if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
					sumday += 366;
				else
					sumday += 365;
			}
		}
		if (month > 2)
		{
			for (int i = year + 1; i <= year + 18; i++)
			{
				if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
					sumday += 366;
				else
					sumday += 365;
			}
		}
		cout << sumday << endl;
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
