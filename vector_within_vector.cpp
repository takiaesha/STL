#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,tc,a,b,c;
    cin>>n>>tc;
    vector<vector<int>>vec(n);
    while(tc--)
    {
        cin>>a;
        if(a==0)
        {
            cin>>b>>c;
            vec[b].push_back(c);
        }
        else if(a==1)
        {
            cin>>b;
            if(!vec[b].empty())
            {
                for(int i=0; i<vec[b].size(); i++)
                    if(i==vec[b].size()-1)
                        cout<<vec[b][i]<<endl;
                    else
                        cout<<vec[b][i]<<" ";
            }
            else
                cout<<endl;
        }
        else
        {
            cin>>b;
            vec[b].clear();
        }

    }
    return 0;
}

