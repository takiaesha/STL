#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    sync;
    ll n,m;
    cin>>n>>m;
    vector<ll> v1,v2,v;

    for(int i=0; i<n; ++i){
        ll x;
        cin>>x;
        v1.pb(x);
    }

    for(int i=0; i<m; ++i){
        ll p;
        cin>>p;
        v2.pb(p);
    }

    v.resize(v1.size() + v2.size());
    std::copy(v1.begin(), v1.end(), v.begin());
    std::copy(v2.begin(), v2.end(), v.begin() + v1.size());

    sort(v.begin(),v.end());
    for(auto val:v) cout<< val << "  ";
    cout<< endl;
