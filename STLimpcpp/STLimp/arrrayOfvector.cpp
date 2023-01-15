#include<bits/stdc++.h>
using namespace std;
void printFun(vector<int>v){
    cout<<"size "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";

    }
    cout<<endl;
    


}

/* to way to declear the array in the the vector*/
int main(){

    /*colomn are fixed but rows are dinamic*/
//     int N;
//     cin>>N;

//     vector<int>v[N];
//     for (int i = 0; i < N; i++)
//     {
//         int num;
//         cin>>num;
//         for (int j = 0; j < num; j++)
//         {
//             int x;
//             cin>>x;
//             v[i].push_back(x);
//         }
        
//     }
    
// for (int i = 0; i < N; i++)
// {
//     printFun(v[i]);
// }
// // to access the any element we can used v[i][j] to cout value

    
/*dynamic row*/


    int N;
    cin>>N;

    vector<vector<int>>v;
    for (int i = 0; i < N; i++)
    {
        int num;
        cin>>num;

        // 1 method
        // vector<int>temp;
        // for (int j = 0; j < num; j++)
        // {
        //     int x;
        //     cin>>x;
        //     // v[i].push_back(x); // give error because i the element does not exist
        //     temp.push_back(x);
        // }
        // v.push_back(temp);



        //2 method
        v.push_back(vector<int>());
        for (int j = 0; j < num; j++)
        {
            int x;
            cin>>x;
            // v[i].push_back(x); // give error because i the element does not exist
            v[i].push_back(x);
        }
        

    }
    
for (int i = 0; i < v.size(); i++)
{
    printFun(v[i]);
}
// for(int i:v[0])
//   cout<<i<<" ";
   
    return 0;
}