#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int k;
    cin>>k;

    int pre_s=0,total=0;
    unordered_map<int,int>mp;
    mp[0]=1;

    for(int i=0;i<n;i++){
        pre_s+=v[i];
        int div=((pre_s%k)+k)%k;
        if(mp.count(div)){
            total+=mp[div];
        }
        mp[div]++;
    }

    cout<<total<<"\n";

    return 0;
}


// ✅ Final Complexity:
// Time: O(n)

// Space: O(k)