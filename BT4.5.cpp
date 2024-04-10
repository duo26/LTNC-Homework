#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    set<int> s1;
    set<int> s2;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        s1.insert(x);
    }
    for(int i = 0; i <= n; i++){
        int x; cin >> x;
        s2.insert(x);
    }
    for(auto x : s2){
        if(s1.count(x) == 0) cout << x << endl;
    }
    return 0;
}