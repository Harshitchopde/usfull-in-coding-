#include<bits/stdc++.h>
using namespace std;
/* Pairs are their to maintain the relation between any two thing*/
int main(){
    pair<int,string>p;
    // p = make_pair(2,"abc");//giving the value  1
    p={2,"abcd"};// 
    // pair<int,string>p1=p;  //the way to copy the pair

    // cout<<p.first<<" "<<p.second<<endl; cout 2 abcd

  // //passing by referance


    // pair<int,string>&p1=p; 
    // p1.first=3;
    
    // cout<<p.first<<" "<<p.second<<endl;// cout 3 abcd

    /*array in pair */

    // int a[]={1,2,3};
    // int b[]={3,4,5};
    // pair<int,int>p_array[3];  //decaleration of array in pair
    // p_array[0]={1,3};
    // p_array[1]={2,4};
    // p_array[2]={3,5};
    // for (int i = 0; i < 3; i++)
    // {
    //     cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    // }

    /*you can swap any pair for example*/
    // int a[]={1,2,3};
    // int b[]={3,4,5};
    // pair<int,int>p_array[3];  //decaleration of array in pair
    // p_array[0]={1,3};
    // p_array[1]={2,4};
    // p_array[2]={3,5};
    // swap(p_array[0],p_array[2]);
    // for (int i = 0; i < 3; i++)
    // {
    //     cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    // }
    
     
    return 0;
}