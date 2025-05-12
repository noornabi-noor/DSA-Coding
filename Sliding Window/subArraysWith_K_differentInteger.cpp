// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,k;
//     cin>>n>>k;
//     vector<int>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     for(int i=0;i<n;i++){
        
//         for(int j=i;j<n;j++){
            
//             for(int k=i;k<=j;k++){

//                 cout<<v[k]<<' ';

//             }

//             cout<<"\n";

//         }

//     }
//     return 0;
// }


// O(N^3)



#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cin>>n>>k;
    vector<int>v(n);

    unordered_map<int,int>mp;

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int mx=0,start=0;

    for(int i=0;i<n;i++){

        mp[v[i]]++;

        while( mp[v[i]]>k && start<n){
            mp[v[start]]--;
            start++;
        }

        mx=max(mx,i-start+1);
    }

    cout<<mx<<"\n";

    return 0;
}


//O(N)