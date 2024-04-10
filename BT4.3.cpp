#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int start, int end) {
    while (start < end) {
        if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int palindromeIndex(string& s) {
    int n = s.length();
    int left = 0, right = n - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            if (isPalindrome(s, left + 1, right)) {
                return left;
            } else if (isPalindrome(s, left, right - 1)) {
                return right;
            } else {
                return -1;
            }
        }
        left++;
        right--;
    }
    return -1;
}

int main()
{
    int q; cin >> q;
    while(q--){
        string s; cin >> s;
        cout << palindromeIndex(s) << endl;
    }

    return 0;
}