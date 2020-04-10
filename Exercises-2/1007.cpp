#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long f[65], min;
	int i, j, n;
	f[1] = 1;
	f[2] = 3;
	for (i = 3; i < 65; i++)
	{
		min = 0x7FFFFFFFFFFFFFFF;
		for (j = 1; j < i; j++){
			if (2 * f[j] + pow(2.0, i - j) - 1 < min){
				min = 2 * f[j] + pow(2.0, i - j) - 1;
			}
		}
		f[i] = min;
	}
	while (cin>>n)
	{
		cout << f[n] << endl;
	}
}