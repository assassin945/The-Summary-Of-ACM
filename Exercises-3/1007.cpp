﻿#include <iostream>
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