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
    vector<int> v[n];

    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        for(int j=0; j<k; j++){
            int p;
            cin>>p;
            v[i].pb(p);
        }
    }

    for(int i=0; i<n; i++){
       for(int j=0; j<v[i].size(); j++){
        cout<< v[i][j]<<" ";

       } cout<<endl;
    }


    return 0;
}

