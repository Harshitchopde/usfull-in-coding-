#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int>l;
    l.push_back(5);
    l.push_front(0);
    for(int i:l)
        cout<<i<<" ";
cout<<endl;
    cout<<l.front()<<endl;
    cout<<l.back()<<endl;
    // time complexity of erase is O(n)
    cout<<l.size()<<endl;
}