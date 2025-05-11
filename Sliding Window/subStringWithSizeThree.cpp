#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    unordered_map<char,int>mp;
    int cnt=0,k=3;
    for(int i=0;i<3;i++){
        mp[s[i]]++;
    }
    if(mp.size()==k){
        cnt++;
    }
    for(int i=k;i<s.size();i++){
        mp[s[i-k]]--;
        if(mp[s[i-k]]==0){
            mp.erase(s[i-k]);
        }
        mp[s[i]]++;
        if(mp.size()==k){
            cnt++;
        }
    }
    cout<<cnt<<"\n";
    return 0;
}