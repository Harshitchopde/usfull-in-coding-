#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<string>str;
    str.push("hello");
    str.push("world");
    str.push("Harshit");
   cout<<str.top()<<endl;
   cout<<"size of stack "<<str.size()<<'\n';
   str.pop();
    cout<<str.top()<<endl;
   cout<<"size of stack "<<str.size();
    return 0;
}