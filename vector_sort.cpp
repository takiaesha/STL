#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> v = {12,4,6,1,-6,90,45,32};

    sort(v.begin(),v.end());
    for(auto x:v) cout<< x << " ";
    cout<<endl;

    reverse(v.begin(),v.end());
    for(auto x:v) cout<< x <<" ";
    cout<< endl;

    random_shuffle(v.begin(),v.end());
    for(int i=0; i<v.size(); i++){
        cout<< v[i] <<" ";
    } cout << "\n";


    return 0;
}
