#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int k;
    cin>>k;
    unordered_map<char,int>mp;
    int cnt=0;
    for(int i=0;i<k;i++){
        mp[s[i]]++;
    }

    // for(auto u:mp){
    //     cout<<u.first<<" "<<u.second<<" ";
    // }

    int mx=0;
    
    for(auto u:mp){
        if(u.first=='a' || u.first=='e' || u.first=='i' || u.first=='o' || u.first=='u'){
            cnt+=u.second;
        }
    }
    mx=cnt;



    for(int i=k;i<s.size();i++){
        
        mp[s[i-k]]--;
        if(mp[s[i-k]]==0){

            mp.erase(s[i-k]);

            if(mp.count('a') || mp.count('e') || mp.count('i') || mp.count('o') || mp.count('u')){
                cnt--; 
            }
            
        }

        if(mp[s[i]]==0 && mp.count('a') || mp.count('e') || mp.count('i') || mp.count('o') || mp.count('u')){
            cnt++;
        }

        mp[s[i]]++;
        
        mx=max(mx,cnt);
        
    }

    cout<<mx;

    return 0;
}

//weallloveyou 7



