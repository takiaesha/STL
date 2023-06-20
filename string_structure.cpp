///string structure _ dynamic array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin,s);
    string c = s+s;
    cout<< s << endl;

    string p = c.substr(5,6);
    cout<< p << endl;


    return 0;
}

