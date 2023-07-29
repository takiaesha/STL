#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    set<int>::iterator it;

    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    s.insert(20);

    for(it= s.begin(); it!=s.end(); it++){
        cout<< *it << " ";
    } cout<< "\n";

    cout<< s.size() << endl;
    ///erase, dont applicable +
    s.erase(50);
    for(it= s.begin(); it!=s.end(); it++){
        cout<< *it << " ";
    } cout<< "\n"; //10 20 30 40

    it = s.begin();
    advance(it,2);
    s.erase(it);

    for(auto x:s) cout<< x << " ";
    cout<< "\n";  //10 20 40

    s.insert(60);
    s.insert(30);
    s.insert(11);
    /// 10 11 20 30 40 60
    ///range delete
    it = s.begin();
    auto it1 = s.begin();
    advance(it,1);
    advance(it1,4);
    s.erase(it,it1);

    for(it= s.begin(); it!=s.end(); it++){
        cout<< *it << " ";
    } cout<< "\n";  //10 40 60

    it = s.find(10);
    if(s.find(10) != s.end()) cout<< "Found\n";
    else cout<< "Not found\n";

    cout<< s.count(60) << endl;  //1

    s.insert(50);
    s.insert(80);
    s.insert(70);

    ///lower bound
    it = s.lower_bound(40);
    cout<< *it << endl; //40
    it = s.lower_bound(20);
    cout<< *it << endl; //40
    it = s.lower_bound(100);
    cout<< *it << endl; //garbage value


    ///upper bound
    it = s.upper_bound(40);
    cout<< *it << endl; //50
    it = s.upper_bound(30);
    cout<< *it << endl; //40
    it = s.upper_bound(100);
    cout<< *it << endl; //garbage value

    set<string> s1 = {"nipu","turin","esha","programmers"};
    set<string> s2 = {"lala","lolo","lili"};
    s1.swap(s2);

    for(auto it=s2.begin(); it!=s2.end(); it++){
        cout<< *it << " ";
    } cout << "\n";

    s1 = s2;
    for(auto it=s1.begin(); it!=s1.end(); it++){
        cout<< *it << " ";
    } cout << "\n";


    ///print set in descending order
    set<int,greater<int>> s4;
    s4.insert(100);
    s4.insert(800);
    s4.insert(200);
    s4.insert(400);
    s4.insert(600);
    s4.insert(700);

    for(auto it=s4.begin(); it!=s4.end(); it++){
        cout<< *it << " ";
    } cout<< "\n";



    return 0;
}
