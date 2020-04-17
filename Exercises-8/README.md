# Exercises-8

## 1001-Max Sum

### Problem Description

Given a sequence a[1],a[2],a[3]......a[n], your job is to calculate the max sum of a sub-sequence. For example, given (6,-1,5,4,-7), the max sum in this sequence is 6 + (-1) + 5 + 4 = 14.

### Input

The first line of the input contains an integer T(1<=T<=20) which means the number of test cases. Then T lines follow, each line starts with a number N(1<=N<=100000), then N integers followed(all the integers are between -1000 and 1000).

### Output

For each test case, you should output two lines. The first line is "Case #:", # means the number of the test case. The second line contains three integers, the Max Sum in the sequence, the start position of the sub-sequence, the end position of the sub-sequence. If there are more than one result, output the first one. Output a blank line between two cases.

### Sample Input

```
2
5 6 -1 5 4 -7
7 0 6 -1 1 -6 7 -5
```

### Sample Output

```
Case 1:
14 1 4

Case 2:
7 1 6
```

### Author

Ignatius.L

## 1002-Can you find it?

### Problem Description

Give you three sequences of numbers A, B, C, then we give you a number X. Now you need to calculate if you can find the three numbers Ai, Bj, Ck, which satisfy the formula Ai+Bj+Ck = X.

### Input

There are many cases. Every data case is described as followed: In the first line there are three integers L, N, M, in the second line there are L integers represent the sequence A, in the third line there are N integers represent the sequences B, in the forth line there are M integers represent the sequence C. In the fifth line there is an integer S represents there are S integers X to be calculated. 1<=L, N, M<=500, 1<=S<=1000. all the integers are 32-integers.

### Output

For each case, firstly you have to print the case number as the form "Case d:", then for the S queries, you calculate if the formula can be satisfied or not. If satisfied, you print "YES", otherwise print "NO".

### Sample Input

```
3 3 3
1 2 3
1 2 3
1 2 3
3
1
4
10
```

### Sample Output

```
Case 1:
NO
YES
NO
```

### Author

wangye

### Source

HDU 2007-11 Programming Contest

## 1003-Pairs

### Problem Description

John has n points on the X axis, and their coordinates are (x[i],0),(i=0,1,2,…,n−1). He wants to know how many pairs<a,b>that |x[b]−x[a]|≤k.(a<b)

### Input

The first line contains a single integer T (about 5), indicating the number of cases.
Each test case begins with two integers n,k(1≤n≤100000,1≤k≤109).
Next n lines contain an integer x[i](−109≤x[i]≤109), means the X coordinates.

### Output

For each case, output an integer means how many pairs<a,b> that |x[b]−x[a]|≤k.

### Sample Input

```
2
5 5
-100
0
100
101
102
5 300
-100
0
100
101
102
```

### Sample Output

```
3
10
```

### Source

BestCoder Round #31

## 1004-find the nth digit

### Problem Description

假设：
S1 = 1
S2 = 12
S3 = 123
S4 = 1234
.........
S9 = 123456789
S10 = 1234567891
S11 = 12345678912
............
S18 = 123456789123456789
..................
现在我们把所有的串连接起来
S = 1121231234.......123456789123456789112345678912.........
那么你能告诉我在S串中的第N个数字是多少吗？

### Input

输入首先是一个数字K，代表有K次询问。
接下来的K行每行有一个整数N(1 <= N < 2^31)。

### Output

对于每个N，输出S中第N个对应的数字.

### Sample Input

```
6
1
2
3
4
5
10
```

### Sample Output

```
1
1
2
1
2
4
```

### Author

8600

### Source

HDU 2007-Spring Programming Contest - Warm Up （1）