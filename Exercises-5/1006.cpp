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