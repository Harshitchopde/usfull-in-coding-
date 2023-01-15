#include<bits/stdc++.h>
using namespace std;
/*in queue first come first get*/
int main(){
    queue<string>que;
    que.push("hello");
    que.push("world");
    que.push("see");
    cout<<que.front()<<endl;
    cout<<que.back()<<endl;
    que.pop();// remove the first element of the queue
    cout<<que.front();



    return 0;
}