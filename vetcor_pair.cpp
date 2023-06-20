#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    while(n--){
        vector<pair<char,int>> v1,v2;
        char c;
        double d;
        for(int i=0; i<n; i++){
           cin>>c>>d;
           v1.push_back({c,d});
        }

        sort(v1.begin(),v1.end());

        for(int i=0; i<v1.size(); i++){
            cout<< v1[i].first <<" ";
            cout<< v1[i].second<<"\n";
        }
//range
    char a = 'e', b = 'h';
    for(int i=0; i<v1.size(); i++){
       if(v1[i].first>=a && v1[i].first<=b){

       }else v2.push_back(v1[i]);
    }


    }
    return 0;
}
