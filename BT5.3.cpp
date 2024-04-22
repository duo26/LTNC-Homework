#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1 ; i <= n; i++) cin >> v[i];
    int index, left, right;
    cin >> index >> left >> right;
    for (int i = 1 ; i <= n; i++){
        if (i >= index) v[i] = v[i + 1];
    }
    cout << n - 1 - right + left << endl;
    for (int i = 1; i <= n - 1; i++){
        if (i < left || i >= right) cout << v[i] << " ";
    }
    return 0;
}
