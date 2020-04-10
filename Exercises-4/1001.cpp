#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int temp, res;
    vector<int> a;
    while (true)
    {
        res = 0;
        cin >> temp;
        if (temp == -1)
        {
            break;
        }
        a.push_back(temp);
        while (cin>>temp && temp)
        {
            a.push_back(temp);
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < a.size() - 1; i++)
        {
            for (int j = i; j < a.size(); j++)
            {
                if (a[j] == (2 * a[i]))
                {
                    res++;
                    break;
                }
            }
        }
        cout << res << endl;
        a.clear();
    }
}