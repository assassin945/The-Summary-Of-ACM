#include <iostream>
using namespace std;
int main()
{
	int a[21] = { 0,1,2,3 };
	for (int i = 4; i < 21; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
	}
	int n,m;
	cin >> n;
	while (n--)
	{
		cin >> m;
		cout << a[m] << endl;
	}
}