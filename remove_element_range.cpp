#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1,3,5,7,2,4,10,89};
//user input
//    int a,n;  cin>>n;
//    for(int i=0; i<n; i++){
//        cin>>a;
//        v.push_back(a);
//    }

    vector<int>::iterator it1,it2;

    it1 = v.begin()+3;
    it2 = v.begin()+5;
    v.erase(it1,it2);

    for(auto x:v) cout<< x << " ";
    cout<<endl;

    return 0;
}
