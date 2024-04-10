#include <bits/stdc++.h>
using namespace std;

int getTotalX(vector<int> a, vector<int> b){
    int max = b.front();
    int j = a.front();
    int num = 1;
    int x =0;
    int i, k;
    int flag,flag1,count = 0;
    while (x <= max) {
    flag = 0, flag1 = 0;
    i = 0, k = 0;
    x = num*j;

    while (i < a.size() || k < b.size()) {
        if( i <= a.size()-1) {
        if (x % a[i] == 0){
             flag++;
        }

            ++i;
        }

        if(k <= b.size()-1) {
            if (b[k] % x == 0 || b[k] % x == 0){
             flag1++;                
        }
            ++k;
        }

    }
    if (flag == a.size() && flag1 == b.size()) {
        count ++;
    }
    num++;
}
    return count;
}

int main(){
    int n, m; cin >> n >> m;
    vector<int> a;
    vector<int> b;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        b.push_back(x);
    }
    cout << getTotalX(a, b) << endl;

    return 0;
}