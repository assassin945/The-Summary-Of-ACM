#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int a, b, c;
	vector<int> fibonacci;
	a = 1;
	b = 3;
	fibonacci.push_back(a);
	fibonacci.push_back(b);
	for (int i = 1; i < 30; i++)
	{
		c = 2 * fibonacci[i - 1] + fibonacci[i];
		fibonacci.push_back(c);
	}
	int n,m;
	cin >> n;
	while (n--)
	{
		cin >> m;
		cout << fibonacci[m - 1] << endl;
	}
}