#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    multiset<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(10);
    s.insert(8);

    cout<< s.size() <<endl;
    s.erase(s.find(5));  //one instance delete
    cout<< s.count(5) << endl;
    for(auto x:s) cout<< x <<"  ";
    cout<< endl;
    //cout<< p << endl;
//    s.erase(5);
//    cout<< s.count(5) <<endl;


    return 0;
}
