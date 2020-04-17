# 练习9

## 1001-Rightmost Digit

### Problem Description

Given a positive integer N, you should output the most right digit of N^N.

### Input

The input contains several test cases. The first line of the input is a single integer T which is the number of test cases. T test cases follow.
Each test case contains a single positive integer N(1<=N<=1,000,000,000).

### Output

For each test case, you should output the rightmost digit of N^N.

### Sample Input

```
2
3
4
```

### Sample Output

```
7
6
```

### Hint

In the first case, 3 * 3 * 3 = 27, so the rightmost digit is 7.
In the second case, 4 * 4 * 4 * 4 = 256, so the rightmost digit is 6.

### Author

Ignatius.L

## 1002-Pseudoprime numbers

### Problem Description

Fermat's theorem states that for any prime number p and for any integer a > 1, a^p == a (mod p). That is, if we raise a to the pth power and divide by p, the remainder is a. Some (but not very many) non-prime values of p, known as base-a pseudoprimes, have this property for some a. (And some, known as Carmichael Numbers, are base-a pseudoprimes for all a.) 
Given 2 < p ≤ 1,000,000,000 and 1 < a < p, determine whether or not p is a base-a pseudoprime. 

### Input

Input contains several test cases followed by a line containing "0 0". Each test case consists of a line containing p and a.

### Output

For each test case, output "yes" if p is a base-a pseudoprime; otherwise output "no". 

### Sample Input

```
3 2
10 3
341 2
341 3
1105 2
1105 3
0 0
```

### Sample Output

```
no
no
yes
no
yes
yes
```

### Author

Gordon V. Cormack

### Source

2008-1杭电公开赛(非原创)

## 1003-Fibonacci Again

### Problem Description

There are another kind of Fibonacci numbers: F(0) = 7, F(1) = 11, F(n) = F(n-1) + F(n-2) (n>=2).

### Input

Input consists of a sequence of lines, each containing an integer n. (n < 1,000,000).

### Output

Print the word "yes" if 3 divide evenly into F(n).

Print the word "no" if not.

### Sample Input

```
0
1
2
3
4
5
```

### Sample Output

```
no
no
yes
no
no
no
```

### Author

Leojay

## 1004-Number Sequence

### Problem Description

A number sequence is defined as follows:

f(1) = 1, f(2) = 1, f(n) = (A * f(n - 1) + B * f(n - 2)) mod 7.

Given A, B, and n, you are to calculate the value of f(n).

### Input

The input consists of multiple test cases. Each test case contains 3 integers A, B and n on a single line (1 <= A, B <= 1000, 1 <= n <= 100,000,000). Three zeros signal the end of input and this test case is not to be processed.

### Output

For each test case, print the value of f(n) on a single line.

### Sample Input

```
1 1 3
1 2 10
0 0 0
```

### Sample Output

```
2
5
```

### Author

CHEN, Shunbao

### Source

ZJCPC2004

## 1005-Quoit Design

### Problem Description

Have you ever played quoit in a playground? Quoit is a game in which flat rings are pitched at some toys, with all the toys encircled awarded.
In the field of Cyberground, the position of each toy is fixed, and the ring is carefully designed so it can only encircle one toy at a time. On the other hand, to make the game look more attractive, the ring is designed to have the largest radius. Given a configuration of the field, you are supposed to find the radius of such a ring.

Assume that all the toys are points on a plane. A point is encircled by the ring if the distance between the point and the center of the ring is strictly less than the radius of the ring. If two toys are placed at the same point, the radius of the ring is considered to be 0.

### Input

The input consists of several test cases. For each case, the first line contains an integer N (2 <= N <= 100,000), the total number of toys in the field. Then N lines follow, each contains a pair of (x, y) which are the coordinates of a toy. The input is terminated by N = 0.

### Output

For each test case, print in one line the radius of the ring required by the Cyberground manager, accurate up to 2 decimal places. 

### Sample Input

```
2
0 0
1 1
2
1 1
1 1
3
-1.5 0
0 0
0 1.5
0
```

### Sample Output

```
0.71
0.00
0.75
```

### Author

CHEN, Yue

### Source

ZJCPC2004







