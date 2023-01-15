#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < t-2; i++)
    {
        for (int j = i+1; j < t-1; j++)
        {
            if(arr[i]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                break;
            }
        }
        
    }

    for (int i = 0; i < t; i++)
    {
        cout<<arr[i];
    }
    
    
    
    return 0;
}