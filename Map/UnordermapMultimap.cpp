#include<bits/stdc++.h>
using namespace std;
void print(unordered_map<int,string>&mp){
     for(auto pr :mp){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
int main(){
    // 1. inbuilt implementation  not do unordered_map<pair<int,string>>mp;
    // 2.Time complexity
    // 3.valid keys datatype

   int t;
    cin>>t;
    string a[t];
    unordered_map<string,int>m;
    for(int i =0; i<t ;i++){
        cin>>a[i];
        m[a[i]]++;
        
    }
        for(auto vla : m){
            cout<<vla.first<<" "<<vla.second<<endl;
        }
    
    return 0;
}