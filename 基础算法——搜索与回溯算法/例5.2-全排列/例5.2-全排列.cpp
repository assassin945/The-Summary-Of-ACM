// 例5.2-全排列.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// 关于全排列，可以使用next_permutation()函数生成（该函数位于“algorithm”库中）

#include <iostream>
#include <iomanip>
using namespace std;
void search(int);
void print();

int num = 0, a[10001] = { 0 }, n, r;
bool used[10001] = { 0 };

int main()
{
	cout << "Please input n and r: ";//结果数据量巨大，切勿输入过大的n
	cin >> n >> r;
	search(1);
	cout << "number = " << num << endl;
}

void search(int k) {
	for (int i = 1; i <= n; i++) {
		if (!used[i])
		{
			a[k] = i;
			used[i] = 1;
			if (k == r)
			{
				print();
			}
			else
			{
				search(k + 1);
			}
			used[i] = 0;
		}
	}
}

void print() {
	num++;
	for (int i = 1; i <= r; i++) {
		cout << setw(3) << a[i];
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
