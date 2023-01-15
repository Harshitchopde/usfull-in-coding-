#include <bits/stdc++.h>
using namespace std;
// https://www.codechef.com/problems/GCDQ
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, Q;
        cin >> N >> Q;
        int a[N+10];
        for (int i = 1; i <= N; ++i)
        {
            cin >> a[i];
        }

        
        
       while(Q--)
        {
            int l, r;
            cin >> l >> r;
            int gc = 0;

 
            for (int i = 1; i <= l-1; i++)
            {
                gc =__gcd(gc,a[i]);
            }
            for (int i = r+1; i <= N; i++)
            {
                gc =__gcd(gc,a[i]);
            }  
            cout<<gc<<endl;        
        }
    }

    return 0;
} 

// #include <bits/stdc++.h>
// using namespace std;
// // https://www.codechef.com/problems/GCDQ
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int N, Q;
//         cin >> N >> Q;
//         int a[N+10];
//         for (int i = 1; i <= N; ++i)
//         {
//             cin >> a[i];
//         }
//         int f[N+10];
//         int b[N+10];

//          f[1]=b[N+1]=0;
//         for (int i = 1; i < N+1; ++i)
//         {
//             f[i]=__gcd(a[i],f[i-1]);
//         }
//         for (int i = N+1; i >=1; --i)
//         {
//            b[i]=__gcd(a[i],b[i+1]);
//         }
        
        
//        while(Q--)
//         {
//             int l, r;
//             cin >> l >> r;
//             // int gc = 0;

 
//             cout << __gcd(f[l-1],b[r+1])<< endl;
//         }
//     }

//     return 0;
// } 