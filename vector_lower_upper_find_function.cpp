///vector lower, upper, find function implementation
//https://www.hackerrank.com/challenges/cpp-lower-bound/problem ---(better understanding)
#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    sync;
    int n;
    cin>>n;
    vector<int> v;
    vector<int>::iterator it1,it2,it3;

    for(int i=0; i<n; i++){
        int val;
        cin>>val;
        v.pb(val);
    }

    int d;
    cin>>d;

    it1 = lower_bound(v.begin(),v.end(),d);
    it2 = upper_bound(v.begin(),v.end(),d);

    cout<< "Lower bound value  position = "<< (it1-v.begin()) << "\n";
    cout<< "Upper bound value position = "<< (it2-v.begin()) << "\n";

    int p;
    cin>>p;

    it3 = find(v.begin(),v.end(),p);
    if(it3==v.end()) cout<< "Value not find\n";
    else cout<< "Find\n";

    if(it3==*it1) cout<< "Found\n";
    else cout<< "NO\n;

    return 0;

}
