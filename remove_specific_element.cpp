#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> v = {1,5,4,2,8,9,1,10};
    vector<int>::iterator it;

    it = v.begin()+3;
    v.erase(it);
//       for(auto x:v) cout<< x << endl;

    v.erase(v.begin()+4);
    for(auto it=v.begin(); it != v.end(); it++){
        cout<< *it << " ";
    }
    cout<< "\n";

    for(int i=0; i<v.size(); i++) cout<< v[i] <<" ";
    cout<<endl;

    for(auto x:v) cout<< x << endl;


    return 0;
}
