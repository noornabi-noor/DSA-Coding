#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin>>s>>t;

    unordered_map<char, int> mp;

    for(int i=0;i<t.size();i++){
        mp[t[i]]++;
    }

    unordered_map<char,int>mp1;
    int have=0,need=mp.size(),start=0;
    int length=INT_MAX,ans_st=0;

    for(int i=0;i<s.size();i++){
        char c=s[i];
        mp1[c]++;

        if(mp.count(c) && mp1[c]==mp[c]){
            have++;
        }

        while(have==need){
            if(i-start+1<length){
                length=i-start+1;
                ans_st=start;
            }

            mp1[s[start]]--;
            if(mp.count(s[start]) && mp1[s[start]]<mp[s[start]]){
                have--;
            }
            start++;
        }

    }

    if(length==INT_MAX){
        cout<<0<<"\n";
    }
    else{
        cout<<s.substr(ans_st, length)<<" ";
    }

    return 0;
}


//time complexity: O(N)