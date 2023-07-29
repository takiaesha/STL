///set insertion to another set

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    set<int> s1 = {1,5,7,9,2,4,19,15};
    set<int>::iterator it;

    for(it=s1.begin(); it != s1.end(); it++){
        cout<< *it <<" ";
    } cout<<endl;

    set<int> s2;
    s2.insert(s1.find(4),s1.end());

    for(it=s2.begin(); it!=s2.end(); it++){
        cout<< *it <<" ";
    } cout<< "\n";

    return 0;
}
