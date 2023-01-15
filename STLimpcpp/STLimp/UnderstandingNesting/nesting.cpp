// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // map<set<int>,int>m;
//     // set<int>s1 ={1,2};
//     // set<int>s2 ={2,2};
//     // // cout<<(s1<s2);

//     map<pair<string, string>, vector<int>> m;
//     int n;
//     while (n--)
//     {
//         string fn, ln;
//         int t;
//         cin >> fn >> ln >> t;
//         for (int i = 0; i < t; i++)
//         {
//             int x;
//             cin >> x;
//             m[{fn, ln}].push_back(x);   //m[{fn, ln}]--> vector
//         }
//     }
//         for (auto &rt : m)
//         {
//         auto &full_nam = rt.first;
//         auto &list = rt.second;
//         cout << full_nam.first << " " << full_nam.second << endl;
//         // cout<<list.size<<endl;
//         for (auto &element : list)
//         {
//             cout << element << " " << endl;
//         }
//         cout << endl;
//     }

//     return 0;
// }   //not desire output

#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,set<string>> marks_map;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int marks;
        string name;
        cin>>name>>marks;
        marks_map[marks].insert(name);
    }
    auto lst_it =--marks_map.end();
    while (true)
    {
        auto &students =(*lst_it).second;
        int marks = (*lst_it).first;
        for(auto student : students){
            cout<<student<<" "<<marks<<endl;

        }
        if (lst_it == marks_map.begin()) break;
        lst_it--;
        

    }
    
    
    return 0;
}