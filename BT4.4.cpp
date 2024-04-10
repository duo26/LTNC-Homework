#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<vector<int>> v(n);
    int num1, num2;

    for(int i = 0; i < n; i++){
        cin >> num1;
        for(int j = 0; j < num1; j++){
            cin >> num2;
            v[i].push_back(num2);
        }
    }
    int first, second;
    for (int i = 0; i < q; i++) { 
        cin >> first >> second;
        cout << v[first][second] << endl;
    }
    return 0;
}
