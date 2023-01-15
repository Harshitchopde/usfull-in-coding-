#include<bits/stdc++.h>
using namespace std;
/*in deque both pushBack pushFront popBack popFront all operation is operated one*/
int main(){
    deque<int>dq;
    dq.push_back(2);
    dq.push_front(1);
    for(int i :dq)
     cout<<i<<" ";
    // cout<<dq.front();//give front element value

    // cout<<dq.back();//give last element value
 cout<<endl;
    /*erase function */

//     dq.erase(dq.begin(),dq.begin()+1);
// for(int i :dq)
//     cout<<i<<" ";
/*size*/ 
    cout<<dq.size();
    return 0;
}