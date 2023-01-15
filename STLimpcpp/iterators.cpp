#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v ={2,3,4,5};
    // for (int i = 0; i < v.size(); i++)
    // {
    //     // cout<<v[i]<<" ";
    // }
    //  vector<int>:: iterator it=v.begin();
    // cout<<*(it+3)<<endl;
    // cout<<v.end();


    // vector<int>:: iterator it;
    // for(it =v.begin(); it!=v.end(); ++it){

    // cout<<*(it)<<endl;
    // }
////vector are continuous  maps sets not continuous diff  it+1 &it++


    vector<pair<int,int>>v2={{1,2},{3,4},{5,6}};
    
    // vector<pair<int,int>>::iterator it;
    for(auto it =v2.begin(); it!=v2.end();++it){
        // cout<<(*it).first<<" "<<(*it).second<<endl;
         cout<<(it->first)<<" "<<(it->second)<<endl;
    }
// auto automaticaly determine the data type of the value
auto a=1;
auto b=2.3;
// // range base loop
        for(int value: v){
            cout<<value<<" ";// copy 
        }
        cout<<endl;
        for(int &value: v){
            cout<<value<<" ";// actual value
        }
        cout<<endl;

        for(pair<int,int> val : v2){
            cout<<val.first<<" ";
        }

        for(auto val : v2){
            cout<<val.first<<" ";
        }
        
        

    return 0;
}