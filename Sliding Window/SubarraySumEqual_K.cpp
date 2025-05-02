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

    unordered_map<int,int>mp;
    mp[0]=1;
    int pre_s=0,total=0;

    for(int i=0;i<n;i++){
        pre_s+=v[i];
        if(mp.count(pre_s-k)){
            total+=mp[pre_s-k];
        }
        mp[pre_s]++;
    }

    cout<<total<<"\n";
}

// 12 
// 2 1 7 -4 2 1 3 4 -15 2 -3 6
// 6

// Time Complexity: O(N)