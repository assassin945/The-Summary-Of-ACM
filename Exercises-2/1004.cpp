#include <iostream>
using namespace std;
int main()
{
	int a[31] = { 1,0,3,0 };
	for (int i = 4; i < 31; i++)
	{
		a[i] = 4 * a[i - 2] - a[i - 4];
	}
	int n;
	while (cin>>n && n >= 0)
	{
		cout << a[n] << endl;
	}
}