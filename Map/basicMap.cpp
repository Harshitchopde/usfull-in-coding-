#include<bits/stdc++.h>
using namespace std;
void print(map<int,string>&mp){
     for(auto pr :mp){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
int main(){
    // map<int,string>m;
    // m[1]="abc";
    // m[5]="csd";
    // m[3]="fkd";
    // cout<<m[5];
    map<int,string>mp;
    mp[1]="hello";
    mp[2]="world";
    mp[5]="good";  // O(log(n))
    // map<int,string>::iterator it;
    // for ( it=mp.begin(); it!=mp.end() ; ++it)
    // {
    //     cout<<(*it).first <<" "<<(*it).second<<endl;
    // }
    // mp.insert({3,"your"});
    // for(auto pr :mp){
    //     cout<<pr.first<<" "<<pr.second<<endl;
    // }
    print(mp);

    // auto it = mp.find(2);
    // if (it==mp.end()){
    //     cout<<"no";
    // }
    // else
    // {
    //    cout<<(*it).first<<" "<<(*it).second;
        
    // }
    

    // .clear .erase()
    
    return 0;
}