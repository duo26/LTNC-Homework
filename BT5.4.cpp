#include<bits/stdc++.h>

using namespace std;

int pos = -1;

void Binary(vector<int> v, int value){
    int left = 0, right = v.size() - 1;
    bool appear = false;
    while(left <= right){
        int mid = (left + right) / 2;
        if (v[mid] == value){
            appear = true;
            pos = mid;
            right = mid - 1;
        }
        else{
            if (v[mid] > value){
                pos = mid;
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
    }
    if (appear) cout << "Yes " << pos + 1 << endl;
        else cout << "No " << pos + 1 << endl;
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    int size_arr;
    cin >> size_arr;
    vector<int> u(size_arr);
    for (int i = 0; i < size_arr; i++) cin >> u[i];
    for (int i = 0; i < size_arr; i++){
        //Binary(v, u[i]);
        if (*(lower_bound(v.begin(), v.end(), u[i])) == u[i]){
            cout << "Yes " << lower_bound(v.begin(), v.end() , u[i]) - v.begin() + 1 << endl;
        }
        else{
            cout << "No " << lower_bound(v.begin(), v.end() , u[i]) - v.begin() + 1 << endl;
        }
    }
    return 0;
}
