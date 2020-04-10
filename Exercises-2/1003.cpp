#include <iostream>
using namespace std;
int main()
{
	int m, n;
	cin >> n;
	while (n--)
	{
		cin >> m;
		cout << (3 * m * (m - 1) + 2) << endl;
	}
}