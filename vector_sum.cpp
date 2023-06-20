#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n; cin>>n;

    int sum = 0;
    for(int i=0; i<n; i++){
        int p;
        cin>>p;
        v.push_back(p);
        sum += v[i];
    }

    cout<< sum << endl;
    return 0;

}
