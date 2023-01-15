#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str[n];
    map<string,int>m;
    for (int i = 0; i < n; i++)
    {
        cin>>str[i];
        m[str[i]]++;
    }
    int querie;
    cin>>querie;
    string cntOf[querie];
    for (int j = 0; j < querie; j++)
    {
        cin>>cntOf[j];
        cout<<m[cntOf[j]]<<endl;
            }
    
    
    return 0;
}
