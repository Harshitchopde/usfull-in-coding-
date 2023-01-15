// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {   int N,Q;
//         cin>>N>>Q;
//         string str;
//         cin >> str;
//         while (Q--)
//         {
//         int l, r;
//         cin >> l >> r;
//         int hsh[26];
//         for (int i = 0; i < 26; ++i)
//         {
//             hsh[i]=0;

//         }
//         l--;r--;
//         for (int i = l; i <= r; i++)
//         {

//         hsh[str[i] - 'a']++;
//         }
//         int oddCnt=0;
//         for (int i = 0; i < 26; i++)
//         {

//         if (hsh[i]%2==1){
//             oddCnt++;
//         }
//         }
//         if (oddCnt>1)
//         {
//             cout<<"No"<<endl;
//         }
//         else
//         {
//             cout<<"Yes"<<endl;
//         }

//         }

//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
// link--> https://youtu.be/zwlCeWUGlE0?list=PLauivoElc3ggagradg8MfOZreCMmXMmJ-
const int N = 1e5 + 10;
int hsh[N][26];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {   
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                hsh[i][j]=0;
            }
            
        }
        
        int N, Q;
        cin >> N >> Q;
        string str;
        cin >> str;
        for (int i = 0; i < N; i++)
            
            {
                hsh[i + 1][str[i] - 'a']++;
            }
        for (int i = 0; i < 26; i++)
        {
            for (int j = 1; j<= N; j++)
            {
                hsh[j][i] += hsh[j - 1][i];
            }
        }

        while (Q--)
        {
            int l, r;
            cin >> l >> r;

            int oddCnt = 0;
            for (int i = 0; i < 26; i++)
            {
                int charCnt = hsh[r][i]-hsh[l-1][i];

                    if (charCnt% 2 != 0) oddCnt++;
               
            }
            if (oddCnt > 1)
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
    }

    return 0;
}