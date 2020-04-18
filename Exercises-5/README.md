# Exercises-5

> 本次练习主要内容是高精度计算，涉及大整数运算、高精度浮点数运算

## 1001-A + B Problem II(1002)

### Problem Description

I have a very simple problem for you. Given two integers A and B, your job is to calculate the Sum of A + B.

### Input

The first line of the input contains an integer T(1<=T<=20) which means the number of test cases. Then T lines follow, each line consists of two positive integers, A and B. Notice that the integers are very large, that means you should not process them by using 32-bit integer. You may assume the length of each integer will not exceed 1000.

### Output

For each test case, you should output two lines. The first line is "Case #:", # means the number of the test case. The second line is the an equation "A + B = Sum", Sum means the result of A + B. Note there are some spaces int the equation. Output a blank line between two test cases.

### Sample Input

```html
2
1 2
112233445566778899 998877665544332211
```

### Sample Output

```html
Case 1:
1 + 2 = 3

Case 2:
112233445566778899 + 998877665544332211 = 1111111111111111110
```

### Author

Ignatius.L

### Solution

```c++
#include <iostream>
#include <cstring>
using namespace std;
void printNum(char[]);
int main(){
    char a1[1001],b1[1001];
    int a[1001],b[1001],c[1001];
    int lena,lenb,lenc;
    int x;
    int n,cas,tem;
    cin>>n;
    tem=n;
    cas=1;
    while (n--)
    {
        memset(a,0,sizeof(a));//初始化被加数数组
        memset(b,0,sizeof(b));//初始化加数数组
        memset(c,0,sizeof(c));//初始化结果数组

        scanf("%s %s",a1,b1);//获取两个数字
        lena=strlen(a1);//获取被加数字符串长度
        lenb=strlen(b1);//获取加数字符串长度

        for (int i = 0; i <= lena-1; i++)//将被加数字符串的每一个字符处理成数字
        {
            a[lena-i]=a1[i]-48;
        }
        for (int j = 0; j <= lenb-1; j++)//将加数字符串的每一个字符处理成数字
        {
            b[lenb-j]=b1[j]-48;
        }
        //开始计算
        lenc=1;
        x=0;
        while (lenc<=lena || lenc<=lenb)
        {
            c[lenc]=a[lenc]+b[lenc]+x;;
            x=c[lenc]/10;
            c[lenc]%=10;
            lenc++;
        }
        //处理最高位
        c[lenc]=x;
        if (c[lenc]==0)
        {
            lenc--;
        }
        //输出
        cout<<"Case "<<cas<<":"<<endl;
        printNum(a1);
        cout<<" + ";
        printNum(b1);
        cout<<" = ";
        for(int k = lenc; k > 0; k--){
            cout<<c[k];
        }
        if (cas!=tem)
        {
            cout<<"\n"<<"\n";
        }
        else
        {
            cout<<"\n";
        }
        cas++;
    }
    return 0;
}
void printNum(char s[]){
    int len=strlen(s);
    for (int i = 0; i < len; i++)
    {
        cout<<s[i];
    }
}
```

## 1002-N!(1042)

### Problem Description

Given an integer N(0 ≤ N ≤ 10000), your task is to calculate N!

### Input

One N in one line, process to the end of file.

### Output

For each N, output N! in one line.

### Sample Input

```
1
2
3
```

### Sample Output

```
1
2
6
```

### Author

JGShining（极光炫影）

### Solution

```c++
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
    int a[40010];
    int n,cns,len;
    while (cin>>n)
    {
        memset(a, 0, sizeof(a));
        a[1] = 1;
        len = 1;
        for (int i = 1; i <= n; ++i)
        {
            cns = 0;
            for (int j = 1; j <= len; ++j)
            {
                a[j] = a[j] * i + cns;
                cns = a[j] / 10;
                a[j] = a[j] % 10;
                if (cns > 0 && j >= len)
                {
                    len++;
                }
            }
        }
        for (int k = len; k >= 1; k--) {
            printf("%d",a[k]);
        }
        printf("\n");
    }
    return 0;
}
```

## 1003-Integer Inquiry(1047)

### Problem Description

One of the first users of BIT's new supercomputer was Chip Diller. He extended his exploration of powers of 3 to go from 0 to 333 and he explored taking various sums of those numbers.
"This supercomputer is great," remarked Chip. "I only wish Timothy were here to see these results."(Chip moved to a new apartment, once one became available on the third floor of the Lemon Sky apartments on Third Street.)

### Input

The input will consist of at most 100 lines of text, each of which contains a single VeryLongInteger. Each VeryLongInteger will be 100 or fewer characters in length, and will only contain digits (no VeryLongInteger will be negative).

The final input line will contain a single zero on a line by itself.

### Output

Your program should output the sum of the VeryLongIntegers given in the input.

This problem contains multiple test cases!

The first line of a multiple input is an integer N, then a blank line followed by N input blocks. Each input block is in the format indicated in the problem description. There is a blank line between input blocks.

The output format consists of N output blocks. There is a blank line between output blocks.

### Sample Input

```html
1


123456789012345678901234567890
123456789012345678901234567890
123456789012345678901234567890
0
```

### Sample Output

```html
370370367037037036703703703670
```

### Source

East Central North America 1996

### Solution

```c++
#include <iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char input[209];
int sum[209];
int main()
{
    int t;
    scanf("%d",&t);//实例个数
    while(t--)
    {
        memset(sum,0,sizeof(sum));//初始化总和为0
        while(true)
        {
            scanf("%s",input);//输入的一个大数
            if(strcmp(input,"0")==0){
                break;
            }
            int len=strlen(input);
            int i=len-1;
            for(int j=i; j>=0; j--){
                sum[i-j]+=input[j]-'0';
            }   
        }
        int c=0;
        for(int i=0; i<200; i++)//总和进位
        {
            int s = c+sum[i];
            c = s/10;
            sum[i] = s%10;
        }
        int i;
        for(i=199; i>=0; i--){
            if(sum[i]!=0)
            {
                break;
            }
        }
        //找到总和的最高位，总和的高位在右
        for(; i>0; i--){
            printf("%d",sum[i]);
        }   
        printf("%d",sum[0]);
        printf("\n");
        if(t>0)printf("\n");
    }
    return 0;
}
```

## 1004-Simple Algorithmetics(1119)

### Problem Description

One part of the new WAP portal is also a calculator computing expressions with very long numbers. To make the output look better, the result is formated the same way as is it usually used with manual calculations.
Your task is to write the core part of this calculator. Given two numbers and the requested operation, you are to compute the result and print it in the form specified below. With addition and subtraction, the numbers are written below each other. Multiplication is a little bit more complex: first of all, we make a partial result for every digit of one of the numbers, and then sum the results together.

### Input

There is a single positive integer T on the first line of input. It stands for the number of expressions to follow. Each expression consists of a single line containing a positive integer number, an operator (one of +, - and *) and the second positive integer number. Every number has at most 500 digits. There are no spaces on the line. If the operation is subtraction, the second number is always lower than the first one. No number will begin with zero.

### Output

For each expression, print two lines with two given numbers, the second number below the first one, last digits (representing unities) must be aligned in the same column. Put the operator right in front of the first digit of the second number. After the second number, there must be a horizontal line made of dashes (-).

For each addition or subtraction, put the result right below the horizontal line, with last digit aligned to the last digit of both operands.

For each multiplication, multiply the first number by each digit of the second number. Put the partial results one below the other, starting with the product of the last digit of the second number. Each partial result should be aligned with the corresponding digit. That means the last digit of the partial product must be in the same column as the digit of the second number. No product may begin with any additional zeros. If a particular digit is zero, the product has exactly one digit -- zero. If the second number has more than one digit, print another horizontal line under the partial results, and then print the sum of them.

There must be minimal number of spaces on the beginning of lines, with respect to other constraints. The horizontal line is always as long as necessary to reach the left and right end of both numbers (and operators) right below and above it. That means it begins in the same column where the leftmost digit or operator of that two lines (one below and one above) is. It ends in the column where is the rightmost digit of that two numbers. The line can be neither longer nor shorter than specified.

Print one blank line after each test case, including the last one.

### Sample Input

```
4
12345+67890
324-111
325*4405
1234*4
```

### Sample Output

```
 12345
+67890
------
 80235

 324
-111
----
 213

    325
  *4405
  -----
   1625
     0
 1300
1300
-------
1431625

1234
  *4
----
4936
```

### Source

Central Europe 2000

### Solution

```c++
#include<iostream>
#include<string>
using namespace std;
#define L 1000
string add(string a,string b)//只限两个非负整数相加
{
    string ans;
    int na[L]={0},nb[L]={0};
    int la=a.size(),lb=b.size();
    for(int i=0;i<la;i++) na[la-1-i]=a[i]-'0';
    for(int i=0;i<lb;i++) nb[lb-1-i]=b[i]-'0';
    int lmax=la>lb?la:lb;
    for(int i=0;i<lmax;i++) na[i]+=nb[i],na[i+1]+=na[i]/10,na[i]%=10;
    if(na[lmax]) lmax++;
    for(int i=lmax-1;i>=0;i--) ans+=na[i]+'0';
    return ans;
}
string sub(string a,string b)//只限大的非负整数减小的非负整数
{
    string ans;
    int na[L]={0},nb[L]={0};
    int la=a.size(),lb=b.size();
    for(int i=0;i<la;i++) na[la-1-i]=a[i]-'0';
    for(int i=0;i<lb;i++) nb[lb-1-i]=b[i]-'0';
    int lmax=la>lb?la:lb;
    for(int i=0;i<lmax;i++)
    {
        na[i]-=nb[i];
        if(na[i]<0) na[i]+=10,na[i+1]--;
    }
    while(!na[--lmax]&&lmax>0)  ;lmax++;
    for(int i=lmax-1;i>=0;i--) ans+=na[i]+'0';
    return ans;
}
string mul(string a,string b)//高精度乘法a,b,均为非负整数
{
    string s;
    int na[L],nb[L],nc[L],La=a.size(),Lb=b.size();//na存储被乘数，nb存储乘数，nc存储积
    fill(na,na+L,0);fill(nb,nb+L,0);fill(nc,nc+L,0);//将na,nb,nc都置为0
    for(int i=La-1;i>=0;i--) na[La-i]=a[i]-'0';//将字符串表示的大整形数转成i整形数组表示的大整形数
    for(int i=Lb-1;i>=0;i--) nb[Lb-i]=b[i]-'0';
    for(int i=1;i<=La;i++)
        for(int j=1;j<=Lb;j++)
        nc[i+j-1]+=na[i]*nb[j];//a的第i位乘以b的第j位为积的第i+j-1位（先不考虑进位）
    for(int i=1;i<=La+Lb;i++)
        nc[i+1]+=nc[i]/10,nc[i]%=10;//统一处理进位
    if(nc[La+Lb]) s+=nc[La+Lb]+'0';//判断第i+j位上的数字是不是0
    for(int i=La+Lb-1;i>=1;i--)
        s+=nc[i]+'0';//将整形数组转成字符串
    return s;
}
void result(string left,string right,int opmode)
{
    if(opmode==1)
    {
        string res=add(left,right);
        int maxsize=(right.length()+1)>res.length()?(right.length()+1):res.length();
        int max=maxsize>left.length()?maxsize:left.length();
        for(int i=1;i<=max-left.length();i++) cout<<" ";
        cout<<left<<endl;
        for(int i=1;i<=max-right.length()-1;i++) cout<<" ";
        cout<<"+"<<right<<endl;
        for(int i=1;i<=max-maxsize;i++) cout<<" "; 
        for(int i=1;i<=maxsize;i++) cout<<"-";
        cout<<endl;
        for(int i=1;i<=max-res.length();i++) cout<<" ";
        cout<<res<<endl;
    }
    else if(opmode==2)
    {
        string res=sub(left,right);
        int maxsize=(right.length()+1)>res.length()?(right.length()+1):res.length();
        int max=maxsize>left.length()?maxsize:left.length();
        for(int i=1;i<=max-left.length();i++) cout<<" ";
        cout<<left<<endl;
        for(int i=1;i<=max-right.length()-1;i++) cout<<" ";
        cout<<"-"<<right<<endl;
        for(int i=1;i<=max-maxsize;i++) cout<<" "; 
        for(int i=1;i<=maxsize;i++) cout<<"-";
        cout<<endl;
        for(int i=1;i<=max-res.length();i++) cout<<" ";
        cout<<res<<endl;
    }
    else if(opmode==3)
    {
        string res=mul(left,right);
        if(res[0]=='0') res="0";
        if(right.length()==1)
        {
        
            int maxsize=2>res.length()?2:res.length();
            int max=maxsize>left.length()?maxsize:left.length();
            for(int i=1;i<=max-left.length();i++) cout<<" ";
            cout<<left<<endl;
            for(int i=1;i<=max-right.length()-1;i++) cout<<" ";
            cout<<"*"<<right<<endl;
            for(int i=1;i<=max-maxsize;i++) cout<<" ";
            for(int i=1;i<=maxsize;i++) cout<<"-";
            cout<<endl;
            for(int i=1;i<=max-res.length();i++) cout<<" ";
            cout<<res<<endl;
        }
        else
        {
            string lasttemp=mul(left,to_string(right[0]-'0'));
            string firsttemp=mul(left,to_string(right[right.length()-1]-'0'));
            if(firsttemp[0]=='0') firsttemp="0";
            int maxsize1=(right.length()+1)>firsttemp.length()?(right.length()+1):firsttemp.length();
            int maxsize2=lasttemp.length()+right.length()-1>res.length()?(lasttemp.length()+right.length()-1):res.length();
            int max=maxsize1>maxsize2?maxsize1:maxsize2;
            for(int i=1;i<=max-left.length();i++) cout<<" ";
            cout<<left<<endl;
            for(int i=1;i<=max-right.length()-1;i++) cout<<" ";
            cout<<"*"<<right<<endl;
            for(int i=1;i<=max-maxsize1;i++) cout<<" ";
            for(int i=1;i<=maxsize1;i++) cout<<"-";
            cout<<endl;
            int pos=0;
            for(int i=right.length()-1;i>=0;i--)
            {
                string temp=mul(left,to_string(right[i]-'0'));
                if(temp[0]=='0') temp="0";
                int space=max-temp.length()-pos;
                for(int i=1;i<=space;i++) cout<<" ";
                cout<<temp<<endl;
                pos++;
            }
            for(int i=1;i<=max-maxsize2;i++) cout<<" ";
            for(int i=1;i<=maxsize2;i++) cout<<"-";
            cout<<endl;
            for(int i=1;i<=max-res.length();i++) cout<<" ";
            cout<<res<<endl;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    string line;
    string left;
    string right;
    getline(cin,line);
    while(t--)
    {
        getline(cin,line);
        int oppos;
        int opmode;
        if(line.find('+')!=string::npos)   
        {
            oppos=line.find('+');
            opmode=1;
        }
        else if(line.find('-')!=string::npos) 
        {
            oppos=line.find('-');
            opmode=2;
        }
        else if(line.find('*')!=string::npos) 
        {
            oppos=line.find('*');
            opmode=3;
        }
        left=line.substr(0,oppos);
        right=line.substr(oppos+1,line.length()-1-oppos);
        result(left,right,opmode);
        cout<<endl;
    }
}
```

此题是整合了加、减、乘三种高精度计算的题目，难度并不大。比较难以实现的地方是输出格式，
故此经过尝试后找了答案，原始版本见此题的文件(1004.cpp)。

## 1005-Big Number(1212)

### Problem Description

As we know, Big Number is always troublesome. But it's really important in our ACM. And today, your task is to write a program to calculate A mod B.

To make the problem easier, I promise that B will be smaller than 100000.

Is it too hard? No, I work it out in 10 minutes, and my program contains less than 25 lines.

### Input

The input contains several test cases. Each test case consists of two positive integers A and B. The length of A will not exceed 1000, and B will be smaller than 100000. Process to the end of file.

### Output

For each test case, you have to ouput the result of A mod B.

### Sample Input

```
2 3
12 7
152455856554521 3250
```

### Sample Output

```
2
5
1521
```

### Author

Ignatius.L

### Source

杭电ACM省赛集训队选拔赛之热身赛

### Solution

```c++
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
string s;
long long  Mod;
int main()
{
    int i;
    while(cin>>s>>Mod){
        long long ans=0,p=1;
        int L=s.length()-1;
        for(i=0;i<=L;i++){
            ans=(ans*10+s[i]-'0')%Mod;
        }
        cout<<ans<<endl;
    }
    return 0;
}
```

此题的思路和前面大整数计算是一样的，将数字存成字符串，然后逐位进行模运算。

## 1006-大明A+B(1753)

### Problem Description

话说，经过了漫长的一个多月，小明已经成长了许多，所以他改了一个名字叫“大明”。
这时他已经不是那个只会做100以内加法的那个“小明”了，现在他甚至会任意长度的正小数的加法。

现在，给你两个正的小数A和B，你的任务是代表大明计算出A+B的值。

### Input

本题目包含多组测试数据，请处理到文件结束。
每一组测试数据在一行里面包含两个长度不大于400的正小数A和B。

### Output

请在一行里面输出输出A+B的值，请输出最简形式。详细要求请见Sample Output。

### Sample Input

```html
1.1 2.9
1.1111111111 2.3444323343
1 1.1
```

### Sample Output

```html
4
3.4555434454
2.1
```

### Author

linle

### Source

2007省赛集训队练习赛（6）_linle专场

### Solution

```c++
#include <iostream>  
#include<string.h>
using namespace std;
int const MAXN = 500;
char a[500], b[500];
int c[500], d[500], e[500], f[500], x[500], y[500];
int main()
{
    int i, j, k, m, p, q, len1, len2, t;
    while (scanf("%s%s", a, b) != EOF)
    {
        memset(c, 0,sizeof(c));
        memset(d, 0, sizeof(d));
        memset(e, 0, sizeof(e));
        memset(f, 0, sizeof(f));
        k = len1 = strlen(a);
        for (i = 0; i < len1; i++)
        {
            if (a[i] == '.'){ k = i; break; }
        }
        m = len2 = strlen(b);
        for (i = 0; i < len2; i++)
        {
            if (b[i] == '.'){ m = i; break; }
        }
        //转换整数部分
        for (j = 0, i = k - 1; i >= 0; i--){ c[j++] = a[i] - '0'; }
        for (j = 0, i = m - 1; i >= 0; i--){ d[j++] = b[i] - '0'; }
        //转换小数部分
        for (j = 0, i = k + 1; i < len1; i++){ e[j++] = a[i] - '0'; }
        for (j = 0, i = m + 1; i < len2; i++){ f[j++] = b[i] - '0'; }

        //计算小数部分
        q = p = 0;
        if (len1 - k>len2 - m)p = len1 - k;
        else p = len2 - m;
        for (i = p - 1; i >= 0; i--)
        {
            x[i] = (e[i] + f[i]+q) % 10;
            if (e[i] + f[i]+q>=10)q =(e[i]+f[i]+q)/10;
            else q = 0;
        }
        //此时q可能不为0，即小数最高位向整数最低位进位
        //计算整数部分
        if (k < m)t = m;
        else t = k;
        for (i = 0; i <=t; i++)//有可能最高位有进位，所以i可能达到t
        {
            y[i] = (c[i] + d[i] + q) % 10;
            if (c[i] + d[i] + q >= 10)q = (c[i] + d[i] + q) / 10;
            else q = 0;
        }
        //输出整数部分
        if (y[t] > 0)//最高位有进位
            t++;
        for (i = t-1; i >= 0; i--)printf("%d",y[i]);
        //消除小数末尾的0
        while (x[p - 1] == 0)
        {
            if (x[p - 1] == 0)p--;
        }
        //输出小数部分
        if (p > 0)printf(".");
        for (i = 0; i < p; i++)printf("%d",x[i]);
        printf("\n");
    }
    return 0;
}
```