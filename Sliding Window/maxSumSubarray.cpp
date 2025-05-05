#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=v[i];
    }
    int mx_sum=sum,ans=sum;
    for(int i=k;i<n;i++){
        ans+=(v[i]-v[i-k]);
        mx_sum=max(mx_sum,ans);
    }
    cout<<mx_sum;
    return 0;
}