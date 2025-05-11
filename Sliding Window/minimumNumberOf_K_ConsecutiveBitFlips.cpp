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

    queue<int>q;
    int flip=0,not_flip=0;
    for(int i=0;i<n;i++){
        if(!q.empty() && q.front()<i){
            q.pop();
        }

        if(q.size()%2==v[i]){
            if(i+k-1>=n){
                not_flip=-1;
                break;
            }
            q.push(i+k-1);
            flip++;
        }
        
    }
    if(not_flip!=-1){
        cout<<flip<<"\n";
    }
    else{
        cout<<-1<<"\n";
    }

    return 0;
}