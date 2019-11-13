// 例5.1-素数环.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
bool pd(int, int);
void search(int);
void print();

bool used[21] = { 0 };
int a[21] = { 0 };
int total,flag = 0;

int main()
{
	search(1);
	//结果超级大，采用flag作为计数器
	cout << total << endl;
	return 0;
}

bool pd(int a, int b) {
	int k = 2;
	int i = a + b;
	while (k <= sqrt(i) && i % k != 0)
	{
		k++;
	}
	if (k > sqrt(i))
	{
		return true;
	}
	else
	{
		return false;
	}
}

void print() {
	total++;
	cout << "<" << total << ">" << endl;
	for (int j = 1; j <= 20; j++)
	{
		cout << a[j] << " ";
	}
	cout << endl;

}

void search(int t) {
	for (int i = 1; i <= 20; i++) {
		if (pd(a[t-1],i) && (!used[i]))
		{
			a[t] = i;
			used[i] = 1;
			if (t == 20)
			{
				if (pd(a[20],a[1]))
				{
					print();
					flag++;
					if (flag == 30)
					{
						break;
					}
				}
			}
			else
			{
				search(t + 1);
			}
			used[i] = 0;
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
