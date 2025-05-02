#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,t;
    cin>>n;

    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>t;

    int s=0,start=0;
    int ln=INT_MAX;

    for(int i=0;i<n;i++){

        s+=v[i];
        while(s>=t){

            s-=v[start];
            ln=min(ln,i-start+1);
            start++;

        }  

    }

    if(ln==INT_MAX){
        cout<<0<<"\n";
    }
    else{
        cout<<ln<<"\n";
    }

    return 0;
}