/*given t test cases and in each
test case a number n. Print its factorial
for each test case%M
where M =10^9+7*/

// constraints
// 1<=T<=10^5
// 1<=N<=10^5
#include <bits/stdc++.h>
using namespace std;
const int m = 1e9 + 7;
const int N = 1e5 + 7;
long long fact[N];

int main()
{
    int t;
    cin >> t;
    fact[0] = fact[1] = 1;
    for (int i = 2; i <= N; i++)// we can precompute the factroial then return it
    {
        fact[i] = (fact[i - 1] * i) % m;
    }

    while (t--)
    {
        int n;
        cin >> n;

        cout << fact[n] << endl;
    }

    return 0;
}