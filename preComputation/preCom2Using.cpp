//first without preComputation tecnic

// #include<bits/stdc++.h>
// using namespace std;
// const int N=1e7+10;
// long long  int arr[N];

// int main(){
//     int n,Q;
//     cin>>n>>Q;
//     while (Q--)
//     {
//         int a,b,x;
//         cin>>a>>b>>x;

//         for (int i = a-1; i < b ; i++)
//         {
          
//             arr[i]+=x;
//         }

        
//     }
//     long long int max=0;
//     for (int i = 0; i < n; i++)
//     {
//         if (max<arr[i])
//         {
//             max=arr[i];
//         }
        
//     }
//     cout<<max<<endl;


//     return 0;
// }
// 5 3
// 1 2 100
// 2 5 100
// 3 4 100

// with preComputation tecnic

#include<bits/stdc++.h>
using namespace std;

//constant must be their because its value can not be change
const int N=1e7+10; 
long long  int arr[N];

int main(){
    int n,Q;
    cin>>n>>Q;
    while (Q--)
    {
        int a,b,x;
        cin>>a>>b>>x;

        arr[a]+=x;  
        arr[b+1]-=x;

        
    }
    for (int i = 1; i <= n; i++)
    {
        arr[i]+=arr[i-1] ; //prefixsum of the array
    }
    

    long long int max=-1;
    for (int i = 1; i <= n; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
        
    }
    cout<<max<<endl;
    
   


    return 0;
}