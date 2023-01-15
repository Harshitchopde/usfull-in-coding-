#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<string>qwe;
    qwe.push("get");
    qwe.emplace("aman");
    qwe.push("harshit");
    qwe.push("hello");
    qwe.push("the");
    while (!qwe.empty())
    {
        cout<<qwe.front()<<endl;
        qwe.pop();
    }
    
    return 0;
}