#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    map<int,int>mp;
    set<int>st;
    for(int i=0;i<k;i++){
        mp[v[i]]++;
        st.insert(v[i]);
    }
    cout<<st.size();
    for(int i=k;i<n;i++){

    }
    return 0;
}