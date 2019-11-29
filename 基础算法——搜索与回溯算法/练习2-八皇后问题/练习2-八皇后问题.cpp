
// 练习2-八皇后问题.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
void print();
void search(int);
int a[1001], b[1001], w[1001], m[1001], tot = 0;
int main()
{
	search(1);
	return 0;
}
void print() {
	tot++;
	cout << "No." << tot << endl;
	for (int j = 1; j <= 8; ++j) {
		for (int i = 1; i <= 8; ++i) {
			if (j == a[i])
			{
				cout << 1 << " ";
			}
			else
			{
				cout << 0 << " ";
			}
		}
		cout << endl;
	}
}
void search(int j) {
	for (int i = 1; i <= 8; ++i) {
		if (b[i] == 0 && w[i-j+7] == 0 && m[i+j] == 0)
		{
			a[j] = i;
			b[i] = 1;
			w[i - j + 7] = 1;
			m[i + j] = 1;
			if (j == 8)
			{
				print();
			}
			else
			{
				search(j + 1);
			}
			b[i] = 0;
			w[i - j + 7] = 0;
			m[i + j] = 0;
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
