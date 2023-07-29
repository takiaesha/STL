#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s ={1,2,3,4,5,6};
    set<int>::iterator it1,it2,p;

   // p = s.erase(s.find(6)); /// print all except 6

    for(auto x:s) cout<< x <<" ";
    cout<< endl;

    it1 = s.begin();
    it2 = s.end();
    it2 --;
    it2--;

    s.erase(it1,it2);

    for(auto it=s.begin(); it!=s.end(); it++){
        cout<< *it <<" ";
    } cout<< "\n";


    return 0;

}
