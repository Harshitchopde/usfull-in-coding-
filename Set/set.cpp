#include<bits/stdc++.h>
using namespace std;
void print(set<string>&s){
    for(string str:s){
        cout<<str<<endl;
    }
    // for(auto it =s.begin() ; it!=s.end();++it){
    //     cout<<(*it);
    // }
}
int main(){
    set<string>s;
    s.insert("hello");
    s.insert("we");
    s.insert("return");
    // print(s);
    auto it =s.find("hello");
    cout<<*it;
    // if(it !=s.end()){
    //     cout<<(*it);
    // }

    return 0;
}



//Q&A


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     string a[t];
//     set<string>s;
//     for (int i = 0; i < t; i++)
//     {
//         cin>>a[i];
//         s.insert(a[i]);

//     }
//     for(string val : s){
//         cout<<val<<endl;
//     }
    

//     return 0;
// }



/*QA*/

