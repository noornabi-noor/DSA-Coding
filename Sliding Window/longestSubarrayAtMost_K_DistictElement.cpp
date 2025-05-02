#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    unordered_map<int,int>mp;
    int length=INT_MIN,start=0;

    for(int i=0;i<n;i++){
        mp[v[i]]++;
        while (mp.size() > k) {
            mp[v[start]]--;
            if (mp[v[start]] == 0) {
                mp.erase(v[start]);
            }
            start++;
        }
        length = max(length, i - start + 1);
    }

    cout<<length<<"\n";

    return 0;
}