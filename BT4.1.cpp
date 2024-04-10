#include<bits/stdc++.h>
using namespace std;

int pageCount(int n, int p) {
    int full_page = n/2;
    int s1 = 1; 
    int s2 = 0;
    while(s1 < p){
        s1 += 2;
        s2 ++;
    }
    return s2 < (full_page - s2) ? s2: (full_page - s2);
}

int main()
{
    int n; cin >> n;
    int p; cin >> p;
    cout << pageCount(n, p) << endl;

    return 0;
}