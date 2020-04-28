# Exercises-7

## 1001-FatMouse' Trade(1009)

### Problem Description

FatMouse prepared M pounds of cat food, ready to trade with the cats guarding the warehouse containing his favorite food, JavaBean.
The warehouse has N rooms. The i-th room contains J[i] pounds of JavaBeans and requires F[i] pounds of cat food. FatMouse does not have to trade for all the JavaBeans in the room, instead, he may get J[i]* a% pounds of JavaBeans if he pays F[i]* a% pounds of cat food. Here a is a real number. Now he is assigning this homework to you: tell him the maximum amount of JavaBeans he can obtain.

### Input

The input consists of multiple test cases. Each test case begins with a line containing two non-negative integers M and N. Then N lines follow, each contains two non-negative integers J[i] and F[i] respectively. The last test case is followed by two -1's. All integers are not greater than 1000.

### Output

For each test case, print in a single line a real number accurate up to 3 decimal places, which is the maximum amount of JavaBeans that FatMouse can obtain.

### Sample Input

```
5 3
7 2
4 3
5 2
20 3
25 18
24 15
15 10
-1 -1
```

### Sample Output

```
13.333
31.500
```

### Author

CHEN, Yue

### Source

ZJCPC2004

## 1002-今年暑假不AC(2037)

### Problem Description

“今年暑假不AC？”
“是的。”
“那你干什么呢？”
“看世界杯呀，笨蛋！”
“@#$%^&*%...”

确实如此，世界杯来了，球迷的节日也来了，估计很多ACMer也会抛开电脑，奔向电视了。
作为球迷，一定想看尽量多的完整的比赛，当然，作为新时代的好青年，你一定还会看一些其它的节目，比如新闻联播（永远不要忘记关心国家大事）、非常6+7、超级女生，以及王小丫的《开心辞典》等等，假设你已经知道了所有你喜欢看的电视节目的转播时间表，你会合理安排吗？（目标是能看尽量多的完整节目）

### Input

输入数据包含多个测试实例，每个测试实例的第一行只有一个整数n(n<=100)，表示你喜欢看的节目的总数，然后是n行数据，每行包括两个数据Ti_s,Ti_e (1<=i<=n)，分别表示第i个节目的开始和结束时间，为了简化问题，每个时间都用一个正整数表示。n=0表示输入结束，不做处理。

### Output

对于每个测试实例，输出能完整看到的电视节目的个数，每个测试实例的输出占一行。

### Sample Input

```
12
1 3
3 4
0 7
3 8
15 19
15 20
10 15
8 18
6 12
5 10
4 14
2 9
0
```

### Sample Output

```
5
```

### Author

lcy

### Source

ACM程序设计期末考试（2006/06/07）

## 1003-Flying to the Mars(1800)

### Problem Description

![img](http://acm.hdu.edu.cn/data/images/1800-1.jpg)
In the year 8888, the Earth is ruled by the PPF Empire . As the population growing , PPF needs to find more land for the newborns . Finally , PPF decides to attack Kscinow who ruling the Mars . Here the problem comes! How can the soldiers reach the Mars ? PPF convokes his soldiers and asks for their suggestions . “Rush … ” one soldier answers. “Shut up ! Do I have to remind you that there isn’t any road to the Mars from here!” PPF replies. “Fly !” another answers. PPF smiles :“Clever guy ! Although we haven’t got wings , I can buy some magic broomsticks from HARRY POTTER to help you .” Now , it’s time to learn to fly on a broomstick ! we assume that one soldier has one level number indicating his degree. The soldier who has a higher level could teach the lower , that is to say the former’s level > the latter’s . But the lower can’t teach the higher. One soldier can have only one teacher at most , certainly , having no teacher is also legal. Similarly one soldier can have only one student at most while having no student is also possible. Teacher can teach his student on the same broomstick .Certainly , all the soldier must have practiced on the broomstick before they fly to the Mars! Magic broomstick is expensive !So , can you help PPF to calculate the minimum number of the broomstick needed .
For example :
There are 5 soldiers (A B C D E)with level numbers : 2 4 5 6 4;
One method :
C could teach B; B could teach A; So , A B C are eligible to study on the same broomstick.
D could teach E;So D E are eligible to study on the same broomstick;
Using this method , we need 2 broomsticks.
Another method:
D could teach A; So A D are eligible to study on the same broomstick.
C could teach B; So B C are eligible to study on the same broomstick.
E with no teacher or student are eligible to study on one broomstick.
Using the method ,we need 3 broomsticks.
……

After checking up all possible method, we found that 2 is the minimum number of broomsticks needed.

### Input

Input file contains multiple test cases.
In a test case,the first line contains a single positive number N indicating the number of soldiers.(0<=N<=3000)
Next N lines :There is only one nonnegative integer on each line , indicating the level number for each soldier.( less than 30 digits);

### Output

For each case, output the minimum number of broomsticks on a single line.

### Sample Input

```
4
10
20
30
04
5
2
3
4
3
4
```

### Sample Output

```
1
2
```

### Author

PPF@JLU

## 1004-最少拦截系统(1257)

### Problem Description

某国为了防御敌国的导弹袭击,发展出一种导弹拦截系统.但是这种导弹拦截系统有一个缺陷:虽然它的第一发炮弹能够到达任意的高度,但是以后每一发炮弹都不能超过前一发的高度.某天,雷达捕捉到敌国的导弹来袭.由于该系统还在试用阶段,所以只有一套系统,因此有可能不能拦截所有的导弹.
怎么办呢?多搞几套系统呗!你说说倒蛮容易,成本呢?成本是个大问题啊.所以俺就到这里来求救了,请帮助计算一下最少需要多少套拦截系统.

### Input

输入若干组数据.每组数据包括:导弹总个数(正整数),导弹依此飞来的高度(雷达给出的高度数据是不大于30000的正整数,用空格分隔)

### Output

对应每组数据输出拦截所有导弹最少要配备多少套这种导弹拦截系统.

### Sample Input

```
8 389 207 155 300 299 170 158 65
```

### Sample Output

```
2
```

### Source

浙江工业大学第四届大学生程序设计竞赛

## 1005-Wooden Sticks(1051)

### Problem Description

There is a pile of n wooden sticks. The length and weight of each stick are known in advance. The sticks are to be processed by a woodworking machine in one by one fashion. It needs some time, called setup time, for the machine to prepare processing a stick. The setup times are associated with cleaning operations and changing tools and shapes in the machine. The setup times of the woodworking machine are given as follows:

(a) The setup time for the first wooden stick is 1 minute.
(b) Right after processing a stick of length l and weight w , the machine will need no setup time for a stick of length l' and weight w' if l<=l' and w<=w'. Otherwise, it will need 1 minute for setup.

You are to find the minimum setup time to process a given pile of n wooden sticks. For example, if you have five sticks whose pairs of length and weight are (4,9), (5,2), (2,1), (3,5), and (1,4), then the minimum setup time should be 2 minutes since there is a sequence of pairs (1,4), (3,5), (4,9), (2,1), (5,2).

### Input

The input consists of T test cases. The number of test cases (T) is given in the first line of the input file. Each test case consists of two lines: The first line has an integer n , 1<=n<=5000, that represents the number of wooden sticks in the test case, and the second line contains n 2 positive integers l1, w1, l2, w2, ..., ln, wn, each of magnitude at most 10000 , where li and wi are the length and weight of the i th wooden stick, respectively. The 2n integers are delimited by one or more spaces.

### Output

The output should contain the minimum setup time in minutes, one per line.

### Sample Input

```
3 
5 
4 9 5 2 2 1 3 5 1 4 
3 
2 2 1 1 2 2 
3 
1 3 2 2 3 1
```

### Sample Output

```
2
1
3
```

### Source

Asia 2001, Taejon (South Korea)

## 1006-Task(4864)

### Problem Description

Today the company has m tasks to complete. The ith task need xi minutes to complete. Meanwhile, this task has a difficulty level yi. The machine whose level below this task’s level yi cannot complete this task. If the company completes this task, they will get (500*xi+2*yi) dollars.
The company has n machines. Each machine has a maximum working time and a level. If the time for the task is more than the maximum working time of the machine, the machine can not complete this task. Each machine can only complete a task one day. Each task can only be completed by one machine.
The company hopes to maximize the number of the tasks which they can complete today. If there are multiple solutions, they hopes to make the money maximum.

### Input

The input contains several test cases.
The first line contains two integers N and M. N is the number of the machines.M is the number of tasks(1 < =N <= 100000,1<=M<=100000).
The following N lines each contains two integers xi(0<xi<1440),yi(0=<yi<=100).xi is the maximum time the machine can work.yi is the level of the machine.
The following M lines each contains two integers xi(0<xi<1440),yi(0=<yi<=100).xi is the time we need to complete the task.yi is the level of the task.

### Output

For each test case, output two integers, the maximum number of the tasks which the company can complete today and the money they will get.

### Sample Input

```
1 2
100 3
100 2
100 1
```

### Sample Output

```
1 50004
```

### Author

FZU

### Source

2014 Multi-University Training Contest 1