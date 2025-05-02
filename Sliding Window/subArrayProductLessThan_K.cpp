#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int k;
    cin>>k;
    int total=0,cnt=0;
    int pre_mul=1,start=0;
    for(int i=0;i<n;i++){

        pre_mul*=v[i];

        while(pre_mul>=k && start<=i){
            pre_mul/=v[start];
            start++;
        }

        total+=(i-start+1);
    }
    cout<<total<<"\n";
    return 0;
}


//✅ Time Complexity: O(n)