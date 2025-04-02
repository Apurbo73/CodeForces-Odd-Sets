#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long t;
    cin >> t;
    while (t--)
    {
        long long a, c = 0, b = 0;
        int i;
        cin >> a;
        vector<int> v;
        for (i = 0; i < 2 * a; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        for (i = 0; i < v.size(); i++)
        {
            if (v[i] % 2 != 0)
            {
                b++;
            }
        }
        if (a == b)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}
 