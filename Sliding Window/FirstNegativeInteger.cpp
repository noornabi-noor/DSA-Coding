#include<bits/stdc++.h>
using namespace std;

int display(queue<int>q){
    while(!q.empty()){
        if(q.front()<0){
            return q.front();
        }
        q.pop();
    }
    return 0;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    queue<int>q;
    vector<int>ans;
    for(int i=0;i<k-1;i++){
        q.push(v[i]);
    }
    for(int i=k-1;i<n;i++){
        q.push(v[i]);
        ans.push_back(display(q));
        q.pop();
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}

//O(NK)