// #include<bits/stdc++.h>       //normal code
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//    int array2d[n][n];
//    int i,j;
//    for (int i = 1; i <= n; i++)
//    {
//     for (int j = 1; j <= n; j++)
//     {
//         cin>>array2d[i][j];
//     }

//    }
//    int q;
//    cin>>q;
//    while (q--)
//    {
//     int a,b,c,d;
//     cin>>a>>b>>c>>d;
//     int sum=0;
//     for (int i = a; i <= c; i++)
//     {
//         for (int j = b; j <= d; j++)
//         {
//            sum+=array2d[i][j];
//         }

//     }

//     cout<<sum<<endl;

//        }
// O()

//    cin>>i>>j;
//    cout<<"The value at "<<i<<" "<<j<<" is "<<a[i][j];

// }

// code with time complexity

#include <bits/stdc++.h> //normal code
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array2d[n][n];
    int i, j;
    int prifixSum[n][n];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> array2d[i][j];
            prifixSum[i][j] = array2d[i][j] + prifixSum[i - 1][j] + prifixSum[i][j - 1] - prifixSum[i - 1][j - 1];
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << prifixSum[c][d] + prifixSum[a - 1][b - 1] - prifixSum[c][b - 1] - prifixSum[a - 1][d] << endl;
       
    }
    return 0;
}
