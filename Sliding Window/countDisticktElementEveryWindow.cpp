#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    map<int, int> mp;  
    vector<int> ans;

    // build the first window
    for(int i = 0; i < k; i++){
        mp[v[i]]++;
    }
    ans.push_back(mp.size());

    // now slide the window
    for(int i = k; i < n; i++){
        // remove the element going out
        mp[v[i - k]]--;
        if(mp[v[i - k]] == 0){
            mp.erase(v[i - k]);
        }

        // add the new element
        mp[v[i]]++;

        // store the current distinct count
        ans.push_back(mp.size());
    }

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

    return 0;
}


// 7 4
// 1 2 1 3 4 2 3