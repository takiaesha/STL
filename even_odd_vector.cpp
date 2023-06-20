#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec;

    int n; cin>>n;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        vec.push_back(a);
    }

    for(auto x:vec){
        if(x%2 == 0) cout<< x << "  ";
    }
    cout<< "\n";

    for(int i=0; i<n; i++){
        if(vec[i]%2==0) cout<< vec[i] << " ";
    }cout<< "\n";

    vector<int>::iterator i;
    for(i=vec.begin(); i != vec.end(); i++){
        if(*i%2==0) cout<< *i <<" ";
    }
    cout<<endl;
    return 0;
}
