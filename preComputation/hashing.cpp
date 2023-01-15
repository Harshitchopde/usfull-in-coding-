/*given array aof N intefers. given q queries
 and in each query given a number 
x, print count of that number in array. */
#include<bits/stdc++.h>
using namespace std;
int w=1e5+10;
int main(){
int hsh[w];
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
       hsh[a[i]]++;
        
    }

    int q;
    cin>>q;
    while (q--)
    {
        int x;
        cin>>x;
        cout<<hsh[x]<<endl;
        

    }
    
    
    return 0;
}