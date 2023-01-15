/*vector are the continuous memory blocks*/

#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int>v){
    cout<<"size: "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}
int main(){
    /*array input in the vector*/

    // vector<int>v;
    // int n;
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin>>x;
    //     v.push_back(x);// O(1) it push back at the back of the vector

    // }
    /*declear the size of array*/
    // vector<int>v(9,3);
        // vector<int>v(9,3);
//     output  size: 10
//             3 3 3 3 3 3 3 3 3 8




    
    /*resize can also be possible pushBack*/

    // // v.push_back(8);

    // v.pop_back();//remove last element O(1)
    // vector<int>v;
    // v.push_back(1);
    // v.push_back(5);
    // vector<int>v1=v;// O(n)where n is the length of the lenth of v
    // v1.push_back(9);
    // printVector(v);
    // printVector(v1);


    // vector<int>a(5,1);
    // for(int i:a)
    //   cout<<i<<" "; //one more method to print the element of the vecotor
    return 0;
}