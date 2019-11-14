# 练习12

## 1001-Brave Game

### Problem Description

十年前读大学的时候，中国每年都要从国外引进一些电影大片，其中有一部电影就叫《勇敢者的游戏》（英文名称：Zathura），一直到现在，我依然对于电影中的部分电脑特技印象深刻。
今天，大家选择上机考试，就是一种勇敢（brave）的选择；这个短学期，我们讲的是博弈（game）专题；所以，大家现在玩的也是“勇敢者的游戏”，这也是我命名这个题目的原因。
当然，除了“勇敢”，我还希望看到“诚信”，无论考试成绩如何，希望看到的都是一个真实的结果，我也相信大家一定能做到的~

各位勇敢者要玩的第一个游戏是什么呢？很简单，它是这样定义的：
1、  本游戏是一个二人游戏;
2、  有一堆石子一共有n个；
3、  两人轮流进行;
4、  每走一步可以取走1…m个石子；
5、  最先取光石子的一方为胜；

如果游戏的双方使用的都是最优策略，请输出哪个人能赢。

### Input

输入数据首先包含一个正整数C(C<=100)，表示有C组测试数据。
每组测试数据占一行，包含两个整数n和m（1<=n,m<=1000），n和m的含义见题目描述。

### Output

如果先走的人能赢，请输出“first”，否则请输出“second”，每个实例的输出占一行。

### Sample Input

```
2
23 2
4 3
```

### Sample Output

```
first
second
```

### Author

lcy

### Source

ACM Short Term Exam_2007/12/13

## 1002-Good Luck in CET-4 Everybody

### Problem Description

大学英语四级考试就要来临了，你是不是在紧张的复习？也许紧张得连短学期的ACM都没工夫练习了，反正我知道的Kiki和Cici都是如此。当然，作为在考场浸润了十几载的当代大学生，Kiki和Cici更懂得考前的放松，所谓“张弛有道”就是这个意思。这不，Kiki和Cici在每天晚上休息之前都要玩一会儿扑克牌以放松神经。
“升级”？“双扣”？“红五”？还是“斗地主”？
当然都不是！那多俗啊~
作为计算机学院的学生，Kiki和Cici打牌的时候可没忘记专业，她们打牌的规则是这样的：
1、  总共n张牌;
2、  双方轮流抓牌；
3、  每人每次抓牌的个数只能是2的幂次（即：1，2，4，8，16…）
4、  抓完牌，胜负结果也出来了：最后抓完牌的人为胜者；
假设Kiki和Cici都是足够聪明（其实不用假设，哪有不聪明的学生~），并且每次都是Kiki先抓牌，请问谁能赢呢？
当然，打牌无论谁赢都问题不大，重要的是马上到来的CET-4能有好的状态。

Good luck in CET-4 everybody!

### Input

输入数据包含多个测试用例，每个测试用例占一行，包含一个整数n（1<=n<=1000）。

### Output

如果Kiki能赢的话，请输出“Kiki”，否则请输出“Cici”，每个实例的输出占一行。

### Sample Input

```
1
3
```

### Sample Output

```
Kiki
Cici
```

### Author

lcy

### Source

ACM Short Term Exam_2007/12/13

## 1003-Play a game

### Problem Description

New Year is Coming! 
ailyanlu is very happy today! and he is playing a chessboard game with 8600. 
The size of the chessboard is n*n. A stone is placed in a corner square. They play alternatively with 8600 having the first move. Each time, player is allowed to move the stone to an unvisited neighbor square horizontally or vertically. The one who can't make a move will lose the game. If both play perfectly, who will win the game?

### Input

The input is a sequence of positive integers each in a separate line. 
The integers are between 1 and 10000, inclusive,(means 1 <= n <= 10000) indicating the size of the chessboard. The end of the input is indicated by a zero.

### Output

Output the winner ("8600" or "ailyanlu") for each input line except the last zero. 
No other characters should be inserted in the output.

### Sample Input

```
2
0
```

### Sample Output

```
8600
```

### Author

ailyanlu

### Source

Happy 2007

## 1004-Northcott Game

### Problem Description

　　Tom和Jerry正在玩一种Northcott游戏，可是Tom老是输，因此他怀疑这个游戏是不是有某种必胜策略，郁闷的Tom现在向你求救了，你能帮帮他么？
游戏规则是这样的：
　　如图所示，游戏在一个n行m列（1 ≤ n ≤ 1000且2 ≤ m ≤ 100）的棋盘上进行，每行有一个黑子（黑方）和一个白子（白方）。执黑的一方先行，每次玩家可以移动己方的任何一枚棋子到同一行的任何一个空格上，当然这过程中不许越过该行的敌方棋子。双方轮流移动，直到某一方无法行动为止，移动最后一步的玩家获胜。Tom总是先下（黑方）。图1是某个初始局面，图二是Tom移动一个棋子后的局面（第一行的黑子左移两步）。

![img](http://acm.hdu.edu.cn/data/images/C63-1003-1.png)

图1

![img](http://acm.hdu.edu.cn/data/images/C63-1003-2.png)

图2

### Input

　　输入数据有多组。每组数据第一行为两个整数n和m，由空格分开。接下来有n行，每行两个数Ti，Ji (1 ≤ Ti, Ji ≤ m)分别表示Tom和Jerry在该行棋子所处的列数。
　　**注意：各组测试数据之间有不定数量的空行。你必须处理到文件末。**

### Output

对于每组测试数据输出一行你的结果。如果当前局面下Tom有必胜策略则输出“I WIN!”，否则输出“BAD LUCK!”。

### Sample Input

```
3 6
4 5
1 2
1 2

3 6
4 5
1 3
1 2
```

### Sample Output

```
BAD LUCK!
I WIN!
```

### Source

“网新恩普杯”杭州电子科技大学程序设计邀请赛

## 1005-取石子游戏

### Problem Description

有两堆石子，数量任意，可以不同。游戏开始由两个人轮流取石子。游戏规定，每次有两种不同的取法，一是可以在任意的一堆中取走任意多的石子；二是可以在两堆中同时取走相同数量的石子。最后把石子全部取完者为胜者。现在给出初始的两堆石子的数目，如果轮到你先取，假设双方都采取最好的策略，问最后你是胜者还是败者。

### Input

输入包含若干行，表示若干种石子的初始情况，其中每一行包含两个非负整数a和b，表示两堆石子的数目，a和b都不大于1,000,000,000。

### Output

输出对应也有若干行，每行包含一个数字1或0，如果最后你是胜者，则为1，反之，则为0。

### Sample Input

```
2 1
8 4
4 7
```

### Sample Output

```
0
1
0
```

### Source

NOI

