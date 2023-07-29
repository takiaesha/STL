///taking pair wise elements in set
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    set<pair<int,int>> st;
    //set<pair<int,int>>:: iterator it;
    int a,b;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        st.emplace(a,b);
    }

    for(auto it: st){
        cout<< it.first << " "<< it.second << "\n";
    }

//    cout<< "pair: \n";
//    for(auto it:st){
//        if(st.count({a,b})==st.count({b,a})) {
//            cout<< it.first << " "<< it.second << "\n";
//        }
//    } no use

    return 0;
}
