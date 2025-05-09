#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cin>>n>>k;
    vector<int>v(n);

    unordered_map<int,int>mp;
    int mxE=INT_MIN;

    for(int i=0;i<n;i++){
        cin>>v[i];
        mxE=max(mxE,v[i]);
    }

    int mx=0,start=0,cnt=0,total=0;

    for(int i=0;i<n;i++){

        if(mxE==v[i]){
            cnt++;
            while(cnt==k){
                total+=n-i;
                if(v[start]==mxE){
                    cnt--;
                }
                start++;
            }
        }

    }

    cout<<total<<"\n";

    return 0;
}


//O(N)