// 练习4-奖学金.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <algorithm>
using namespace std;
struct students
{
	int chin, math, engl, total, rank;
};
students s[300];
int cmp(students, students);
int main()
{
	int n;
	int num[300];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s[i].chin >> s[i].math >> s[i].engl;
		s[i].total = s[i].chin + s[i].math + s[i].engl;
		s[i].rank = i + 1;
	}
	sort(s, s + n, cmp);
	for (int j = 0; j < 5; j++)
	{
		cout << s[j].rank << " " << s[j].total << endl;
	}
}

int cmp(students x, students y) {
	if (x.total == y.total && x.chin == y.chin)
	{
		return x.rank < y.rank;
	}
	else if (x.total == y.total)
	{
		return x.chin > y.chin;
	}
	else
	{
		return x.total > y.total;
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
