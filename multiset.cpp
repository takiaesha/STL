#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> ms;
    multiset<int>::iterator it;
    ms.insert(1);
    ms.insert(3);
    ms.insert(1);
    ms.insert(2);
    ms.insert(7);
    ms.insert(2);
    ms.insert(2);
    ms.insert(10);
    ms.insert(3);

    for(it=ms.begin(); it!=ms.end(); it++){
        cout<< *it<<" ";
    } cout<< '\n';  //1 1 2 2 2 3  7 10

    cout<< ms.count(1) << endl;

    it = ms.lower_bound(2);
    cout<< *it << endl; //2

    auto it1 = it;
    for(auto x=it1; x!=ms.end(); x++) cout<< *x << " ";
    cout<< endl;

    it = ms.lower_bound(4);
    cout<< *it << endl; //7
    it = ms.lower_bound(11);
    cout<< *it << endl;  ///9

    ///upper bound
    it = ms.upper_bound(2);
    cout<< *it << "\n";  //3
    it = ms.upper_bound(10);
    cout<< *it <<  endl;  //9

///erase single element
    it = ms.begin();
    advance(it,3);
    ms.erase(it);

    for(it=ms.begin(); it!=ms.end(); it++){
        cout<< *it<<" ";
    } cout<< '\n'; // 1 1 2 2 3 3 7 10

    ///range delete
    it = ms.begin();
    auto it1 = ms.begin();
    advance(it,2);
    advance(it1,4);
    ms.erase(it,it1);

    for(it=ms.begin(); it!=ms.end(); it++){
        cout<< *it<<" ";
    } cout<< '\n';
    return 0;

}
