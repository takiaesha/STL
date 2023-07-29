//input taking process
#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        s.insert(a);
    }
    s.insert(4);
    s.insert(1);
    s.insert(0);

    for(auto x:s) cout<< x <<" ";
    cout<<endl;

    int cnt = s.count(4);
    cout<<cnt<<endl;

    s.erase(1);
    s.insert(-3);

    set<int>::iterator it;
    for(it=s.begin(); it!=s.end(); it++){
        cout<< *it<< "  ";
    }
    cout<<endl;

///decreasing order print
    set<int, greater<int>> myset = {23,45,66,78,90,123,45};
    set<int>::iterator i;

    for(auto i=myset.begin(); i!=myset.end(); i++){
        cout<< *i << " ";
    }cout << "\n";

    return 0;
}
