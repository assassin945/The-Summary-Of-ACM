#include <iostream>
using namespace std;
int main()
{
	int sum, a, i;
	while (cin>>a)
	{
		sum = 0;
		for (i = 1; i <= a; i++)
		{
			sum = sum + i;
		}
		cout << sum << endl << endl;
	}
	return 0;
}