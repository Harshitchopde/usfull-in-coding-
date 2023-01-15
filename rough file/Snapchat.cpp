#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n],B[n],br[n];
        for (int i = 0; i < n; i++)
        {
            cin>>A[i];
        }
         for (int i = 0; i < n; i++)
        {
            cin>>B[i];
            if(A[i]==0 || B[i]==0)br[i]=0;
            else br[i]=1;
            
        }
        int ans =0;
        for (int i = 0; i < n; i++)
        {
            int cnt =0;
            while (i<n && br[i]!=0)
            {
                i++; cnt++;
            }
            ans=max(ans,cnt);
            
        }
        
        cout<<ans<<endl;

        

    }
    return 0;
}