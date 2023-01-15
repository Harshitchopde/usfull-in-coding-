 /*
 given array a of n integes. given q queries and in each query L
 and R print sum of array elements from index L to R (L and R included)
 
 constraints 
 1<=N<=10^5
  1<=a[i]=10^9
1<=Q<=10^5
1<=L,R<=N
 */
#include<bits/stdc++.h>
using namespace std;
const int N=1e7+7;
int a[N];
int prefixSum[N];
int main(){
    int n;
    cin>>n;
    for (int i = 1; i <= n; ++i)
    {
        cin>>a[i];
        prefixSum[i]=prefixSum[i-1]+a[i];

    }
    
    int q;
    cin>>q;
    while (q--)
    { int L,R;
       cin>>L>>R;
       
    cout<<prefixSum[R]-prefixSum[L-1]<<endl;
    }
    
    
    
    return 0;
}
// 6
// 3 6 2 8 9 2
// 4
// 2 3
// 8
// 4 6
// 19
// 1 5
// 28
// 3 6
// 21