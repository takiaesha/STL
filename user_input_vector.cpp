//taking input from user
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

//size given
    int n,temp;
    cin>>n;

    vector<int> v;
    for(int i=0; i<n; i++){
        cin>>temp;
        v.push_back(temp);
    }

    for(auto i:v) cout<< i <<" ";
    cout<<endl;

    cout<< v.at(40)<< endl; /// its benefit is that it shows warning if range is out.
    cout<< v[40] << endl; /// 0


///input size not given
///this will rake input at the end of file
    int a;
    vector<int> vv;
    while(cin>>a){
        vv.push_back(a);
    }

    for(auto i:vv) cout<< i <<" ";
    cout<<endl;

    return 0;
}
