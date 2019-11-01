// 1007-猜数字.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
const int N = 101;
int n;

struct TestNumber
{
	int a, b, c;
}testNumber[N];

int* split(int origin) {
	int* res = new int[4];
	res[0] = origin / 1000;
	res[1] = (origin % 1000) / 100;
	res[2] = (origin % 100) / 10;
	res[3] = (origin % 10);
	return res;
};

int compare(int guess, int group) {
	int* gus = split(guess);
	int* grp = split(testNumber[group].a);

	int correctIndexCounter = 0;
	int correctValueCounter = 0;
	int flag[4] = { 0,0,0,0 };
	//比较猜测值与输入值每位数字的对应关系
	for (int i = 0; i < 4; i++)
	{
		if (gus[i] == grp[i])
		{
			correctIndexCounter++;
		}
	}
	if (correctIndexCounter != testNumber[group].c) {
		return 0;
	}
	//比较猜测值与输入值有多少个相同数字
	for (int j = 0; j < 4; j++)
	{
		for (int k = 0; k < 4; k++)
		{
			if (gus[j] == grp[k] && flag[k] == 0)
			{
				correctValueCounter++;
				flag[k] = 1;
				break;
			}
		}
	}
	if (correctValueCounter == testNumber[group].b)
	{
		return 1;
	}
	else
	{
		return 0;
	}
};

int main() {
	int flag;
	int realNumberCount;
	int realNumber;
	while (cin >> n && n != 0)
	{
		realNumberCount = 0;
		//将题目给出的输入值全部存入结构体
		for (int i = 0; i < n; i++) {
			cin >> testNumber[i].a >> testNumber[i].b >> testNumber[i].c;
		}
		//使用循环来猜测真实值，并与题目所给输入值进行逐位比较，检测比对结果是否与题目所给比对结果相同
		for (int j = 1000; j < 10000; j++)
		{
			flag = 0;//默认猜测的真实值与题目所给输入情况不符
			for (int k = 0; k < n; k++)
			{
				flag = compare(j, k);//调用比较函数，比较猜测值和输入值
				if (!flag)
				{
					break;
				}
			}
			//在全部n组输入测试后如果全部条件符合，则将计数器递增一，并记录猜测值
			if (flag)
			{
				realNumberCount++;
				realNumber = j;
			}
		}
		//检查计数器，如果是一则找到了结果，否则就是没找到准确结果
		if (realNumberCount == 1)
		{
			cout << realNumber << endl;
		}
		else
		{
			cout << "Not sure" << endl;
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
