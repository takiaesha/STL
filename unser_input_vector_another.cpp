///input size given
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m;  cin>>m;
    vector<int> vec(m);

    for(int i=0; i<m; i++){
        cin>>vec[i];
    }

    for(int i=0; i<m; i++){
        cout<< vec[i] << " ";
    } cout<< "\n";

//serially 1 to 10 store
    vector<int> s;

    for(int i=1; i<=10; i++){
        s.push_back(i);
    }

    for(int i=0; i<s.size(); i++){
        cout<< s[i]<< " ";
    }
    cout<<endl;

   return 0;
}

