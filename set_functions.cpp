#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<string> s={"This", "is", "GeeksForGeeks"};
    set<int>::iterator it;

    for(auto it=s.begin(); it != s.end(); it++){
        cout<< *it <<"  ";
    }
    cout<< "\n";




    return 0;

}
