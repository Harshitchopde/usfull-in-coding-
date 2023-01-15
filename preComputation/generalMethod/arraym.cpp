#include<bits/stdc++.h>
using namespace std;

int main(){
    array<int,4>a={1,2,3,4};
    int sizd=a.size();
    cout<<sizd;
    cout<<endl<<a.at(0);
    // for (int i = 3; i >=0; --i)
    // {
    //     cout<<endl<<a[i];
    // }
    // cout<<a.front();//first element
    // cout<<a.back();//last element
    cout<<a.empty();
    return 0;
}