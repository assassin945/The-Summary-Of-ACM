#include<iostream>
#include<map>
#include<cstring>
using namespace std;

map<string, int>m;

int main()
{
	m["zero"] = 0;
	m["one"] = 1;
	m["two"] = 2;
	m["three"] = 3;
	m["four"] = 4;
	m["five"] = 5;
	m["six"] = 6;
	m["seven"] = 7;
	m["eight"] = 8;
	m["nine"] = 9;
	m["+"] = 10;
	m["="] = 11;
	int cnt[2] = { 0 };
	char a[20];
	int k = 0; int z = 0;
	int sum[2] = { 0 };
	while (cin >> a)
	{
		int d = m[a];
		if (d < 10) cnt[k++] = d;
		if (d == 10)
		{
			if (k == 1) sum[0] = cnt[0];
			else if (k == 2) sum[0] = 10 * cnt[0] + cnt[1];
			k = 0;
		}
		if (d == 11)
		{
			if (k == 1) sum[1] = cnt[0];
			else if (k == 2) sum[1] = 10 * cnt[0] + cnt[1];
			k = 0;
			if (sum[0] + sum[1] == 0) break;
			else cout << sum[0] + sum[1] << endl;
		}
	}
	return 0;
}