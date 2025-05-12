#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int cnt = 0, start = 0, total1 = 0;
    unordered_map<int, int> mp;

    // First pass: Count subarrays with at most k distinct integers
    for (int i = 0; i < n; i++) {
        mp[v[i]]++;
        if (mp[v[i]] == 1) cnt++;
        while (cnt > k) {
            mp[v[start]]--;
            if (mp[v[start]] == 0) cnt--;
            start++;
        }
        total1 += i - start + 1;
    }

    // Second pass: Count subarrays with at most (k - 1) distinct integers
    cnt = 0, start = 0;
    int total2 = 0;
    mp.clear();
    for (int i = 0; i < n; i++) {
        mp[v[i]]++;
        if (mp[v[i]] == 1) cnt++;
        while (cnt > k - 1) {
            mp[v[start]]--;
            if (mp[v[start]] == 0) cnt--;
            start++;
        }
        total2 += i - start + 1;
    }

    cout << (total1 - total2) << '\n';
    return 0;
}


//o(n)