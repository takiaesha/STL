///printing element 1 to 10 using vector structure
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> v;

    for(int i=1; i<=10; i++){
        v.push_back(i);
    }

    for(auto x:v) cout<< x << " ";
    cout<< "\n";

    for(int i=0; i<v.size(); i++){  /// i=1, i<=10 not possible
        cout<< v[i]<< " ";
    }


    return 0;
}
