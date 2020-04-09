# Exercises-3

> 本次练习主要考察的方向是模拟题目所描述的过程，其中最具有代表性的题目是1007。

## 1001-Safecracker(1015)

### Problem Description

"The item is locked in a Klein safe behind a painting in the second-floor library. Klein safes are extremely rare; most of them, along with Klein and his factory, were destroyed in World War II. Fortunately old Brumbaugh from research knew Klein's secrets and wrote them down before he died. A Klein safe has two distinguishing features: a combination lock that uses letters instead of numbers, and an engraved quotation on the door. A Klein quotation always contains between five and twelve distinct uppercase letters, usually at the beginning of sentences, and mentions one or more numbers. Five of the uppercase letters form the combination that opens the safe. By combining the digits from all the numbers in the appropriate way you get a numeric target. (The details of constructing the target number are classified.) To find the combination you must select five letters v, w, x, y, and z that satisfy the following equation, where each letter is replaced by its ordinal position in the alphabet (A=1, B=2, ..., Z=26). The combination is then vwxyz. If there is more than one solution then the combination is the one that is lexicographically greatest, i.e., the one that would appear last in a dictionary."

v - w^2 + x^3 - y^4 + z^5 = target

"For example, given target 1 and letter set ABCDEFGHIJKL, one possible solution is FIECB, since 6 - 9^2 + 5^3 - 3^4 + 2^5 = 1. There are actually several solutions in this case, and the combination turns out to be LKEBA. Klein thought it was safe to encode the combination within the engraving, because it could take months of effort to try all the possibilities even if you knew the secret. But of course computers didn't exist then."

"Develop a program to find Klein combinations in preparation for field deployment. Use standard test methodology as per departmental regulations. Input consists of one or more lines containing a positive integer target less than twelve million, a space, then at least five and at most twelve distinct uppercase letters. The last line will contain a target of zero and the letters END; this signals the end of the input. For each line output the Klein combination, break ties with lexicographic order, or 'no solution' if there is no correct combination. Use the exact format shown below."

### Sample Input

```html
1 ABCDEFGHIJKL
11700519 ZAYEXIWOVU
3072997 SOUGHT
1234567 THEQUICKFROG
0 END
```

### Sample Output

```html
LKEBA
YOXUZ
GHOST
no solution
```

### Source

Mid-Central USA 2002

HDU-1015

### Solution

```c++
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	int num, flag, i, j, k, l, m;
	int tag[15];
	char str[15], ans[8];
	while (cin >> num >> str && num)
	{
		int length = strlen(str);
		flag = 1;
		memset(tag, 0, sizeof(tag));
		for (i = 0; i < length; i++)
		{
			tag[i] = str[i] - 'A' + 1;
		}
		sort(tag, tag + length);
		for (i = 0; i < length; i++) {
			for (j = 0; j < length; j++) {
				if (j != i) {
					for (k = 0; k < length; k++) {
						if (k != j && k != i) {
							for (l = 0; l < length; l++) {
								if (l != k && l != j && l != i) {
									for (m = 0; m < length; m++)
									{
										if (m!=l && m!=k && m!=j && m!=i && 
                                            tag[i]-tag[j]*tag[j]+tag[k]*tag[k]*
                                            tag[k]-tag[l]*tag[l]*tag[l]*tag[l]+
                                            tag[m]*tag[m]*tag[m]*tag[m]*tag[m]==num)
										{
											flag = 0;
											ans[0] = tag[i] - 1 + 'A';
											ans[1] = tag[j] - 1 + 'A';
											ans[2] = tag[k] - 1 + 'A';
											ans[3] = tag[l] - 1 + 'A';
											ans[4] = tag[m] - 1 + 'A';
											ans[5] = '\0';
										}
									}
								}
							}
						}
					}
				}
			}
		}

		if (flag)
			cout << "no solution" << endl;
		else
			cout << ans << endl;
	}
	return 0;
}
```
这道题并不难，但是很复杂，关键点在于每个字母代表了不同的数字，首先要将字母做替换，然后再多重循环，找到与目标值相等的字符串。

## 1002-A Mathematical Curiosity(1017)

### Problem Description

Given two integers n and m, count the number of pairs of integers (a,b) such that 0 < a < b < n and (a^2+b^2 +m)/(ab) is an integer.

This problem contains multiple test cases!

The first line of a multiple input is an integer N, then a blank line followed by N input blocks. Each input block is in the format indicated in the problem description. There is a blank line between input blocks.

The output format consists of N output blocks. There is a blank line between output blocks.

### Input

You will be given a number of cases in the input. Each case is specified by a line containing the integers n and m. The end of input is indicated by a case in which n = m = 0. You may assume that 0 < n <= 100.

### Output

For each case, print the case number as well as the number of pairs (a,b) satisfying the given property. Print the output for each case on one line in the format as shown below.

### Sample Input

```
1

10 1
20 3
30 4
0 0
```

### Sample Output

```
Case 1: 2
Case 2: 4
Case 3: 5
```

### Source

East Central North America 1999, Practice

HDU-1017

### Solution

```c++
#include <iostream>
using namespace std;
int main()
{
	int m, n, cas, flag, count;
	cin >> cas;
	while (cas--)
	{
		flag = 1;
		while (cin>>n>>m && ( n != 0 || m != 0))
		{
			count = 0;
			for (int a = 1; a < n - 1; a++) {
				for (int b = a + 1; b < n; b++)
				{
					if ((a * a + b * b + m) % (a * b) == 0)
					{
						count++;
					}
				}
			}
			cout << "Case " << flag << ": " << count << endl;
			flag++;
		}
		if (cas != 0)puts("");
	}
}
```

此题做一个二重循环，分别测试a和b的可能值即可。

## 1003-Encoding(1020)

### Problem Description

Given a string containing only 'A' - 'Z', we could encode it using the following method:

1. Each sub-string containing k same characters should be encoded to "kX" where "X" is the only character in this sub-string.

2. If the length of the sub-string is 1, '1' should be ignored.

### Input

The first line contains an integer N (1 <= N <= 100) which indicates the number of test cases. The next N lines contain N strings. Each string consists of only 'A' - 'Z' and the length is less than 10000.

### Output

For each test case, output the encoded string in a line.

### Sample Input

```
2
ABC
ABBCCC
```

### Sample Output

```
ABC
A2B3C
```

### Author

ZHANG Zheng

HDU-1020

### Solution

```c++
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int n,len,count;
    char s[10001];
    cin>>n;
    while (n--)
    {
        cin>>s;
        len=strlen(s);
        count = 1;
		for (int i = 1; i <= len; i++)
		{
			if (s[i] == s[i - 1])
				count++;
			else
			{
				if (count == 1)
					cout<<s[i - 1];
				else
				{
					cout<<count<<s[i - 1];
					count = 1;
				}
			}
		}
        cout<<endl;
    }
	return 0;
}
```

由于所给字符串是完全排好顺序依次递增的，也就意味着相同的字符在一起，那么只需要循环计数相同字符就可以。

## 1004-Easier Done Than Said?(1039)

### Problem Description

Password security is a tricky thing. Users prefer simple passwords that are easy to remember (like buddy), but such passwords are often insecure. Some sites use random computer-generated passwords (like xvtpzyo), but users have a hard time remembering them and sometimes leave them written on notes stuck to their computer. One potential solution is to generate "pronounceable" passwords that are relatively secure but still easy to remember.

FnordCom is developing such a password generator. You work in the quality control department, and it's your job to test the generator and make sure that the passwords are acceptable. To be acceptable, a password must satisfy these three rules:

It must contain at least one vowel.

It cannot contain three consecutive vowels or three consecutive consonants.

It cannot contain two consecutive occurrences of the same letter, except for 'ee' or 'oo'.

(For the purposes of this problem, the vowels are 'a', 'e', 'i', 'o', and 'u'; all other letters are consonants.) Note that these rules are not perfect; there are many common/pronounceable words that are not acceptable.

### Input

The input consists of one or more potential passwords, one per line, followed by a line containing only the word 'end' that signals the end of the file. Each password is at least one and at most twenty letters long and consists only of lowercase letters.

### Output

For each password, output whether or not it is acceptable, using the precise format shown in the example.

### Sample Input

```
a
tv
ptoui
bontres
zoggax
wiinq
eep
houctuh
end
```

### Sample Output

```
<a> is acceptable.
<tv> is not acceptable.
<ptoui> is not acceptable.
<bontres> is not acceptable.
<zoggax> is not acceptable.
<wiinq> is not acceptable.
<eep> is acceptable.
<houctuh> is acceptable.
```

### Source

Mid-Central USA 2000

HDU-1039

### Solution

```c++
#include <iostream>
#include <cstring>
using namespace std;
int Rule1(char subChar[], int length) {
	int rule = 0;
	for (int i = 0; i < length; i++)
	{
		if (subChar[i]=='a' || subChar[i]=='e' || subChar[i]=='i' ||
            subChar[i]=='o' || subChar[i]=='u')
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
		if (password[0]=='e' && password[1]=='n' && password[2]=='d')
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
```

根据题目所给要求，分别建立三个规则，然后判断三个规则是否被遵守。

## 1005-Climbing Worm(1049)

### Problem Description

An inch worm is at the bottom of a well n inches deep. It has enough energy to climb u inches every minute, but then has to rest a minute before climbing again. During the rest, it slips down d inches. The process of climbing and resting then repeats. How long before the worm climbs out of the well? We'll always count a portion of a minute as a whole minute and if the worm just reaches the top of the well at the end of its climbing, we'll assume the worm makes it out.

### Input

There will be multiple problem instances. Each line will contain 3 positive integers n, u and d. These give the values mentioned in the paragraph above. Furthermore, you may assume d < u and n < 100. A value of n = 0 indicates end of output.

### Output

Each input instance should generate a single integer on a line, indicating the number of minutes it takes for the worm to climb out of the well.

### Sample Input

```
10 2 1
20 3 1
0 0 0
```

### Sample Output

```
17
19
```

### Source

East Central North America 2002

HDU-1049

### Solution

```c++
#include <iostream>
using namespace std;
int main(){
    int u,d,n;
    int current,res;
    while (cin>>n>>u>>d)
    {
        if (n==0)
        {
            break;
        }
        current=0;
        res=0;
        while (true)
        {
            current+=u;
            res++;
            if (current>=n)
            {
                cout<<res<<endl;
                break;
            }
            current-=d;
            res++;
        }
    }
    return 0;
}
```

此题只需在循环里模拟虫子的攀爬行为即可，设置一个无限循环，直到虫子的下一次攀爬超出规定高度。

## 1006-Booklet Printing(1117)

### Problem Description

When printing out a document, normally the first page is printed first, then the second, then the third, and so on until the end. However, when creating a fold-over booklet, the order of printing must be altered. A fold-over booklet has four pages per sheet, with two on the front and two on the back. When you stack all the sheets in order, then fold the booklet in half, the pages appear in the correct order as in a regular book.
For example, a 4-page booklet would print on 1 sheet of paper: the front will contain page 4 then page 1, and the back will contain page 2 then page 3.

Front Back
------------- -------------
| | | | | |
| 4 | 1 | | 2 | 3 |
| | | | | |
------------- -------------

Your task is to write a program that takes as input the number of pages to be printed, then generates the printing order.

### Input

The input contains one or more test cases, followed by a line containing the number 0 that indicates the end of the file.

Each test case consists of a positive integer n on a line by itself, where n is the number of pages to be printed; n will not exceed 100.

### Output

For each test case, output a report indicating which pages should be printed on each sheet, exactly as shown in the example. If the desired number of pages does not completely fill up a sheet, then print the word Blank in place of a number. If the front or back of a sheet is entirely blank, do not generate output for that side of the sheet.

Output must be in ascending order by sheet, front first, then back.

### Sample Input

```
1
14
4
0
```

### Sample Output

```
Printing order for 1 pages:
Sheet 1, front: Blank, 1
Printing order for 14 pages:
Sheet 1, front: Blank, 1
Sheet 1, back : 2, Blank
Sheet 2, front: 14, 3
Sheet 2, back : 4, 13
Sheet 3, front: 12, 5
Sheet 3, back : 6, 11
Sheet 4, front: 10, 7
Sheet 4, back : 8, 9
Printing order for 4 pages:
Sheet 1, front: 4, 1
Sheet 1, back : 2, 3
```

### Source

Mid-Central USA 1998

HDU-1117

### Solution

```c++
#include <iostream>
using namespace std;
int main(){
    int n,pages,sheets,left,right;
    int sheet[100][5];
    while (cin>>n && n!=0)
    {
        sheets=(n-1)/4+1;
        pages=4*sheets;
        left=1;
        right=pages;
        for (int i = 1; i <= sheets; i++)
        {
            sheet[i][1]=right--;
            sheet[i][2]=left++;
            sheet[i][3]=left++;
            sheet[i][4]=right--;
        }
        printf("Printing order for %d pages:\n", n);
        for (int j = 1; j <= sheets; j++)
        {
            if (!(sheet[j][1]>n && sheet[j][2]>n))
            {
                printf("Sheet %d, front:", j);
				if (sheet[j][1] > n) printf(" Blank, ");
				else printf(" %d, ", sheet[j][1]);
				if (sheet[j][2] > n) printf("Blank\n");
				else printf("%d\n", sheet[j][2]);
            }
            if (!(sheet[j][3]>n && sheet[j][4]>n))
            {
                printf("Sheet %d, back :", j);
				if (sheet[j][3] > n) printf(" Blank, ");
				else printf(" %d, ", sheet[j][3]);
				if (sheet[j][4] > n) printf("Blank\n");
				else printf("%d\n", sheet[j][4]);
            }
        }
    }
    return 0;
}
```

此题难点在于如何模拟书籍的印刷版式。

- 使用一个二维数组```sheet[100][5]```来模拟印刷版式，第一维表示印刷纸张数，第二维表示这张纸的四个部分。

- 建立第一个循环，模拟印刷过程。一张纸可以印刷四个部分，故而若是总印刷数不是4的倍数，则进行补全。超出总打印数的部分，输出时处理。

- 建立第二个循环，判断印刷的内容是否是补全的那一部分。依据判断结果输出。

## 1007-猜数字(1172)

### Problem Description

猜数字游戏是gameboy最喜欢的游戏之一。游戏的规则是这样的：计算机随机产生一个四位数，然后玩家猜这个四位数是什么。每猜一个数，计算机都会告诉玩家猜对几个数字，其中有几个数字在正确的位置上。
比如计算机随机产生的数字为1122。如果玩家猜1234,因为1,2这两个数字同时存在于这两个数中，而且1在这两个数中的位置是相同的，所以计算机会告诉玩家猜对了2个数字，其中一个在正确的位置。如果玩家猜1111,那么计算机会告诉他猜对2个数字，有2个在正确的位置。
现在给你一段gameboy与计算机的对话过程，你的任务是根据这段对话确定这个四位数是什么。

### Input

输入数据有多组。每组的第一行为一个正整数N(1<=N<=100)，表示在这段对话中共有N次问答。在接下来的N行中，每行三个整数A,B,C。gameboy猜这个四位数为A，然后计算机回答猜对了B个数字，其中C个在正确的位置上。当N=0时，输入数据结束。

### Output

每组输入数据对应一行输出。如果根据这段对话能确定这个四位数，则输出这个四位数，若不能，则输出"Not sure"。

### Sample Input

```
6
4815 2 1
5716 1 0
7842 1 0
4901 0 0
8585 3 3
8555 3 2
2
4815 0 0
2999 3 3
0
```

### Sample Output

```
3585
Not sure
```

### Author

lwg

HDU-1172

## 1008-简单计算器(1237)

### Problem Description

读入一个只包含 +, -, *, / 的非负整数计算表达式，计算该表达式的值。

### Input

测试输入包含若干测试用例，每个测试用例占一行，每行不超过200个字符，整数和运算符之间用一个空格分隔。没有非法表达式。当一行中只有0时输入结束，相应的结果不要输出。

### Output

对每个测试用例输出1行，即该表达式的值，精确到小数点后2位。

### Sample Input

```
1 + 2
4 + 2 * 5 - 7 / 11
0
```

### Sample Output

```
3.00
13.36
```

### Source

浙大计算机研究生复试上机考试-2006年

HDU-1237

### Solution

```c++
#include <iostream>
#include <cstring>
#include <stack>
using namespace std;
int main()
{
	double a,b,res;
    char c;
    stack<double> s;
    while (cin>>a)
    {
        while (!s.empty())//清空上一次的计算结果
        {
            s.pop();
        }
        c=getchar();//这一步获取的要么是空格，要么是回车
        if (c=='\n' && a==0)
        {
            break;
        }
        s.push(a);
        scanf("%s",&c);//获取运算符
        while (cin>>b)
        {
            if (c=='*')//判断运算优先级
            {
                a=s.top();
                s.pop();
                s.push(a*b);
            }
            else if (c=='/')
            {
                a=s.top();
                s.pop();
                s.push(a/b);
            }
            else if (c=='+')//加减法优先级最低，先不计算，入栈
            {
                s.push(b);
            }
            else if(c=='-')//减法换成被减数加上减数的相反数
            {
                s.push(-b);
            }
            c=getchar();
            if (c=='\n')
            {
                break;
            }
            scanf("%s",&c);
            getchar();
        }
        res=0;
        while (!s.empty())//取出栈内的全部元素进行加法运算
        {
            res+=s.top();
            s.pop();
        }
        printf("%.2lf\n", res);
    }
    return 0;
}
```

此题需要使用栈这一数据结构来存储运算过程，通过栈“先进后出”这一特性，来有效模拟计算过程中的运算优先级问题。


