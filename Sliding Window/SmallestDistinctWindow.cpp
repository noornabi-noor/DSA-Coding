#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin>>s;

    int sz=s.size();
    unordered_map<char,int>st;

    for(int i=0;i<sz;i++){
        st[s[i]]++;
    }

    int need=st.size(),have=0;
    int mnL=sz;

    unordered_map<char,int>mp;
    int start=0;

    for(int i=0;i<sz;i++){
        char ch=s[i];
        mp[ch]++;

        if(mp[ch]==1){
            have++;
        }

        while (have == need) {
            if (i - start + 1 < mnL) {
                mnL = i - start + 1;
            }
        
            mp[s[start]]--;
            if (mp[s[start]] == 0) {
                have--;
            }
            start++;
        }
        
    }

    cout<<mnL<<"\n";

    return 0;
}
