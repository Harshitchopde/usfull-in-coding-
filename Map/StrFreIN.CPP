#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string a[t];
    map<string,int>m;
    for(int i =0; i<t ;i++){
        cin>>a[i];
        // if (m[a[i]]>=1)
        // {
        //     m[a[i]]++;
        // }
        // else
        // {
        //     m[a[i]]=1;

        // }

        // anthor
        m[a[i]]++;
        
    }
        for(auto vla : m){
            cout<<vla.first<<" "<<vla.second<<endl;
        }
    
    return 0;
}

