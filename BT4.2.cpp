#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}

int main()
{
    int n; cin >> n;
    vector<pair<int, int>> v;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x]++;
    }
    for(auto x : mp) v.push_back(x);
    sort(v.begin(), v.end(), cmp);
    cout << n - v.back().second << endl;

    return 0;
}