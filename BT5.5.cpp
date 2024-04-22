#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    pair<int, int> tmp;
    set<int> s;
    for (int i = 0; i < n; i++){
        cin >> tmp.first >> tmp.second;
        if (tmp.first == 1){
            s.insert(tmp.second);
        }
        else{
            if (tmp.first == 2){
                if (s.find(tmp.second) != s.end()){
                    s.erase(s.find(tmp.second));
                }
            }
            else{
                if (s.find(tmp.second) != s.end()) cout << "Yes" << endl;
                else cout << "No" << endl;
            }
        }
    }
    return 0;
}
