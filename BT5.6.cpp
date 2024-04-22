#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int tmp, grade;
    string a;
    map<string, int> m;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        if (tmp == 1){
            cin >> a >> grade;
            m[a] += grade;
        }
        else{
            if (tmp == 2){
                cin >> a;
                m[a] = 0;
            }
            else{
                cin >> a;
                cout << m[a] << endl;
            }
        }
    }
    return 0;
}
