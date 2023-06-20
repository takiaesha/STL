#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    for(auto x:v) cout<< x << " ";
    cout<< endl;

    v.insert(v.begin(),3);
    for(auto x:v) cout<< x << " ";
    cout<< endl;

    v.insert(v.begin(),3,11);  /// 3bar add hbe 11
    for(auto x:v) cout<< x << " ";
    cout<< endl;

    ///specific place add
    v.insert(v.begin()+2,2,55);
    for(auto x:v) cout<< x << " ";
    cout<< endl;



    ///emplace function
    vector<int> v1;
    vector<int>::iterator it;

    for(int i=10; i<=50; i+=10){
        v1.push_back(i);
    }

    v1.emplace(v1.begin(),99);

    for(int i=0; i<v1.size(); i++){
        cout<< v1[i]<<" ";
    } cout<< "\n";

    v1.emplace_back(100);

     for(int i=0; i<v1.size(); i++){
        cout<< v1[i]<<" ";
    } cout<< "\n";

    return 0;

}
