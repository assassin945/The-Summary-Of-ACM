#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> a;
    int n, res;
    while (true)
    {
        cin >> n;
        if (n < 0)
        {
            break;
        }
        else
        {
            a.push_back(n);
        }
        while (cin >> n && n != 0)
        {
            a.push_back(n);
        }
        sort(a.begin(), a.end());
        res = 0;
        for (int i = a.size() - 1; i >= 1; i--) {
            if (a[i] % 2 == 1)
            {
                continue;
            }
            for (int j = i - 1; j >= 0; j--)
            {
                if (a[j] == (a[i] / 2))
                {
                    res++;
                    break;
                }
            }
        }
        cout << res << endl;
        a.clear();
    }
    return 0;
}