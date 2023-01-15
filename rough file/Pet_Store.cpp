#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        map<int,int>mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            mp[x]++;
        }
        bool istrue=1;
       

        if(n%2==0){
            for(auto i:mp){
                if(i.second%2==1){
                    istrue=0;break;
                }
            }
        }
        if(istrue ==0 || n%2){

        cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        
        

    }
    return 0;
}