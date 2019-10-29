// 1005-Climbing Worm.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int n, u, d, current, min;
void method1() {
	cin >> n >> u >> d;
	while (n)
	{
		current = 0;
		min = 0;
		while (current < n)
		{
			min++;
			current += u;
			if (current == n || current > n)
				break;
			min++;
			current = current - d;
		}
		cout << (min) << endl;
		cin >> n >> u >> d;
	}
}
void method2() {
	while (cin>>n>>u>>d)
	{
		if (n == 0) {
			break;
		}
		if (u >= n)
		{
			cout << 1 << endl;
		}
		else {
			if ((n - u) % (u - d) != 0) {
				current = (n - u) / (u - d) + 1;//收余数
			}
			else {
				current = (n - u) / (u - d);
			}
			min = current * 2 + 1;
			cout << min << endl;
		}
	}
}
int main()
{
	method1();
	//method2();
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
