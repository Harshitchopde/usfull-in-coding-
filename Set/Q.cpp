#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Q;
    cin >> Q;
    set<int> s;

    while (Q--)
    {
        int y;
        long long x;
        cin >> y >> x;
        if (y == 1)
        {
            s.insert(x);
        }
        else if (y == 2)
        {
            if (s.find(x) != s.end())
            {
                s.erase(x);
            }
        }
        else if(y==3)
        {
            auto it = s.find(x);
            if (it != s.end())
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}