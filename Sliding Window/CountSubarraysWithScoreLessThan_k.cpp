#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    long long k;
    cin >> k;

    long long res = 0, sum = 0;
    int start = 0;
    
    for (int end = 0; end < n; end++) {
        sum += v[end];

        while (sum * (end - start + 1) >= k) {
            sum -= v[start++];
        }

        res += (end - start + 1);  
    }

    cout << res << "\n";
    return 0;
}


//O(N)