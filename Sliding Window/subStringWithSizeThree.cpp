// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s;
//     cin>>s;
//     int k;
//     cin>>k;
//     unordered_map<char,int>mp;
//     int cnt=0;
//     for(int i=0;i<k;i++){
//         mp[s[i]]++;
//     }
//     if(mp.size()==k){
//         cnt++;
//     }
//     for(int i=k;i<s.size();i++){
//         mp[s[i-k]]--;
//         if(mp[s[i-k]]==0){
//             mp.erase(s[i-k]);
//         }
//         mp[s[i]]++;
//         if(mp.size()==k){
//             cnt++;
//         }
//     }
//     cout<<cnt<<"\n";
//     return 0;
// }









#include <bits/stdc++.h>
using namespace std;

int minDeletionsToKeepKDistinct(string s, int k) {
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    int distinct = freq.size();
    if (distinct <= k) return 0;

    vector<int> freqs;
    for (auto &p : freq) {
        freqs.push_back(p.second);
    }
    sort(freqs.begin(), freqs.end()); 

    int deletions = 0;
    int toRemove = distinct - k;

    for (int i = 0; i < toRemove; i++) {
        deletions += freqs[i];
    }

    return deletions;
}

int main() {
    string s;
    int k;
    cin >> s >> k;
    cout << minDeletionsToKeepKDistinct(s, k) << endl;
    return 0;
}
