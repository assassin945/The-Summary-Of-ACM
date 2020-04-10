#include <iostream>
using namespace std;
int main()
{
	int m, n;
	int a[21] = { 0,3,7 };
	for (int i = 3; i < 21; i++)
	{
		a[i] = 2 * a[i - 1] + a[i - 2];
	}
	cin >> n;
	while (n--)
	{
		cin >> m;
		cout << a[m] << endl;
	}
}
