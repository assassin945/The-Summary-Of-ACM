#ifndef theFirstMethod_
#define theFirstMethod_

#include <iostream>
using namespace std;
int ans;
void theFirstMethod(int m) {
	int i;
	ans++;
	for (i = 1; i <= m/2; i++)
	{
		theFirstMethod(i);
	}
}
#endif // theFirstMethod_
