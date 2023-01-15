#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
        
        int maxSum =0;
        int maxcurrent =0;
        for (int i = 0; i < n; i++)
        {
            maxcurrent +=arr[i];
            if(maxcurrent>maxSum){
                maxSum= maxcurrent;
            }
            if(maxcurrent<0){
                maxcurrent=0;
            }
        }
        cout<<maxSum<<endl;
    
    
    return 0;
}