#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<char,double>> v,v2;
    int n;
    cin>>n;
    while(n--){
        char c;
        double d;
        cin>>c>>d;
        v.push_back({c,d});
    }

//pair printing
    for(int i=0; i<v.size(); i++){
        cout<< v[i].first <<" "<<v[i].second <<"\n";
    }

///specific range
    char a = 'f', b = 'l';
    for(int i=0; i<v.size(); ++i){
        if(a <= v[i].first && v[i].first <= b){

        }else{
            v2.push_back(v[i]);
        }
    }


    int i = 0;
    while(i < v.size()){
        if(a <= v[i].first && v[i].first <= b){
            v.erase(v.begin() + i);
        }else{
            ++i;
        }
    }

    sort(v.begin(), v.end());


    return 0;
}
