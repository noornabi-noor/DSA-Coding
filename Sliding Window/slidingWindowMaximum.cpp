// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int k;
//     cin>>k;
//     vector<int>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }

//     vector<int>ans;
    
//     for(int i=0;i<n-k;i++){
//         int mx=INT_MIN;
//         for(int j=i;j<i+k;j++){
//             mx=max(mx,v[j]);
//         }
//         ans.push_back(mx);
//     }

//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
    
//     return 0;
// }

//O(NK)









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

    deque<int>d;
    
    for(int i=0;i<k-1;i++){
       if(d.empty() ){
            d.push_back(i);
       }
       else{
            while(!d.empty() && v[i]>v[d.back()]){
                d.pop_back();   
            }
            d.push_back(i);
        }
    }

    vector<int>ans;

    for(int i=k-1;i<n;i++){
      
        while(!d.empty() && v[i]>v[d.back()]){
            d.pop_back();
        }
        d.push_back(i);
        if(d.front()<=i-k){
            d.pop_front();
        }
        ans.push_back(v[d.front()]);
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
    return 0;
}

//Time Complexity: O(n)