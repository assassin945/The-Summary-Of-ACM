// 1004-Easier Done Than Said.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int Rule1(char subChar[], int length) {
	int rule = 0;
	for (int i = 0; i < length; i++)
	{
		if (subChar[i] == 'a' || subChar[i] == 'e' || subChar[i] == 'i' || subChar[i] == 'o' || subChar[i] == 'u')
		{
			rule++;
		}
	}
	return rule;
}

int Rule2(char ch[], int length) {
	char temp[3];
	int rule = 1;
	for (int i = 2; i < length; i++)
	{
		temp[0] = ch[i - 2];
		temp[1] = ch[i - 1];
		temp[2] = ch[i];
		if (Rule1(temp, 3) == 3 || Rule1(temp, 3) < 1)
		{
			rule = 0;
			break;
		}
	}
	return rule;
}

int Rule3(char ch[], int length) {
	int rule = 1;
	for (int i = 1; i < length; i++)
	{
		if (ch[i] == ch[i - 1])
		{
			if (ch[i] == 'e' || ch[i] == 'o')
			{
				continue;
			}
			else
			{
				rule = 0;
				break;
			}
		}
	}
	return rule;
}

void print(char ch[], int length) {
	for (int i = 0; i < length; i++)
	{
		cout << ch[i];
	}
}

int main()
{
	char password[21];
	int length;
	int rule1, rule2, rule3;
	while (cin>>password)
	{
		if (password[0] == 'e' && password[1] == 'n' && password[2] == 'd')
		{
			break;
		}
		length = strlen(password);
		rule1 = Rule1(password, length);
		rule2 = Rule2(password, length);
		rule3 = Rule3(password, length);
		if (rule1 >= 1 && rule2 == 1 && rule3 == 1)
		{
			cout << "<";
			print(password, length);
			cout << ">" << " is acceptable." << endl;
		}
		else
		{
			cout << "<";
			print(password, length);
			cout << ">" << " is not acceptable." << endl;
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
