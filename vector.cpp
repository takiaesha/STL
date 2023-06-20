//vector declaration,access,print,delete
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

//initialize-1
    vector<int> v;
    v.push_back(2);
    v.push_back(10);
    v.push_back(45);
    v.push_back(2);
    v.push_back(1);
    cout<<"Vector size = "<< v.size() << endl;

    cout<< v[2] << endl;
    cout<< v[0] << endl;


//initialize 2
    vector<char> v1(10,'r');
    cout<< v1[5] << endl;
    for(auto c:v1) cout<< c <<" ";
    cout<<endl;

    vector<string> v2(10,"mango");
    cout<< v2[4] << endl;
    for(auto c:v2) cout<< c <<" ";
    cout<<endl;

    vector<double> v3(5,5.2);
    for(auto c:v3) cout<< c << " ";
    cout<<endl;

    //initialize 3
    vector<int> vec = {1,4,7,4,10,12,45,100,234,90};

    for(int i=0; i<vec.size(); i++){
        cout<< vec[i] << " ";
    } cout<< "\n";

    for(auto i: vec){
        cout<< i << " ";
    } cout<<"\n";

    vec.push_back(77);
    vec.push_back(34);

    int p = vec.back(); ///cout<< vec.back()<<"\n";
    cout<<"Last element = "<<p <<endl;
    vec.pop_back();
    cout<< vec.back()<<endl;

    for(auto i:vec){
        cout<< i << "  ";
    } cout<< "\n";

    return 0;
}
