//代码好像有问题
#include <iostream>
using namespace std;
int main()
{
	int a[1000001] = { 0,1,2,2 };
	for (int i = 4; i <= 1000000; i++)
	{
		a[i] = (a[i / 2] + a[i - 2]) % 1000000000;
	}
	int n;
	while (cin>>n)
	{
		cout << a[n] << endl;
	}
}