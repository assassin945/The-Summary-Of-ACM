// 1003-Clock.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void PubbleSort(double(*)[3], int);

int main()
{
	int T;
	char time[5][5], str[30], c;
	double sequence[5][3];
	int i, j, t;
	double hour, min, degree;
	scanf("%d", &T);
	c = getchar();
	while (T--) {
		gets_s(str);
		t = 0;
		for (i = 0; i < 5; i++) {
			for (j = 0; j < 5; j++) {
				time[i][j] = str[t++];
			}
			t++;
		}
		for (i = 0; i < 5; i++) {
			hour = (time[i][0] - '0') * 10 + time[i][1] - '0';
			min = (time[i][3] - '0') * 10 + time[i][4] - '0';
			sequence[i][2] = hour;
			if (hour > 12) {
				hour -= 12;
			}
			if ((hour + min / 60.0) * 30 > min * 6) {
				degree = (hour + min / 60.0) * 30 - min * 6;
			}
			else {
				degree = min * 6 - (hour + min / 60.0) * 30;
			}
			if (degree > 180) {
				degree = 360 - degree;
			}
			sequence[i][0] = degree;
			sequence[i][1] = i;
		}
		PubbleSort(sequence, 5);
		i = sequence[2][1];
		for (j = 0; j < 5; j++) {
			printf("%c", time[i][j]);
		}
		printf("\n");
	}
	return 0;
}

void PubbleSort(double(*array)[3], int n)
{
	int i, j;
	double temp_1, temp_2, temp_3;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (array[j][0] >= array[j + 1][0]) {
				if (array[j][0] == array[j + 1][0]) {
					if (array[j][2] > array[j + 1][2]) {
						temp_1 = array[j][0];
						temp_2 = array[j][1];
						temp_3 = array[j][2];
						array[j][0] = array[j + 1][0];
						array[j][1] = array[j + 1][1];
						array[j][2] = array[j + 1][2];
						array[j + 1][0] = temp_1;
						array[j + 1][1] = temp_2;
						array[j + 1][2] = temp_3;
					}
				}
				else {
					temp_1 = array[j][0];
					temp_2 = array[j][1];
					temp_3 = array[j][2];
					array[j][0] = array[j + 1][0];
					array[j][1] = array[j + 1][1];
					array[j][2] = array[j + 1][2];
					array[j + 1][0] = temp_1;
					array[j + 1][1] = temp_2;
					array[j + 1][2] = temp_3;
				}
			}
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
