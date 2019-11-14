// 例5.4-八皇后问题.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <iomanip>
using namespace std;

bool d[16] = { 0 }, b[9] = { 0 }, c[16] = { 0 };
int sum = 0, a[9];

void search(int);
void print();


int main()
{
	search(1);
}

void search(int i) {
	for (int j = 1; j <= 8; j++) {
		if ((!b[j]) && (!c[i+j]) && (!d[i-j+7]))
		{
			a[i] = j;
			b[j] = 1;
			c[i + j] = 1;
			d[i - j + 7] = 1;
			if (i == 8)
			{
				print();
			}
			else
			{
				search(i + 1);
			}
			b[j] = 0;
			c[i + j] = 0;
			d[i - j + 7] = 0;
		}
	}
}

void print() {
	sum++;
	cout << "sum = " << sum << endl;
	for (int i = 1; i <= 8; i++) {
		cout << setw(4) << a[i];
	}
	cout << endl;
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
