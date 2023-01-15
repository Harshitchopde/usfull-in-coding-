#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        multiset<long long> bags;

        for (int i = 0; i < N; i++)
        {
            long long int candy_cnt;
            cin >> candy_cnt;
            bags.insert(candy_cnt);
        }
        long long total_candies = 0;
        for (int i = 0; i < K; ++i)
        {
            auto last_it = (--bags.end());
            long long int candy_ct = *last_it;
            total_candies += candy_ct;
            bags.erase(last_it);
            bags.insert(candy_ct / 2);
        }
        cout << total_candies << endl;
    }

    return 0;
}