// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int k;
//     cin>>k;
    
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int mx=INT_MIN;
//     queue<int>q;
//     vector<int>ans;
//     for(int i=0;i<k;i++){
//         q.push(arr[i]);
//         mx=max(mx,arr[i]);
//     }  
    
//     ans.push_back(mx);
        
//     for(int i=k;i<n;i++){

//         int chk=q.front();
//         q.pop();
//         q.push(arr[i]);

//         if (chk == mx) {
//             mx = INT_MIN;
//             queue<int> temp = q;
//             while (!temp.empty()) {
//                 mx = max(mx, temp.front());
//                 temp.pop();
//             }
//         } else {
//             mx = max(mx, arr[i]); 
//         }

//         ans.push_back(mx);
//     }

//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
//     return 0;
// }


//Time Complexity is: O(N*K)


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mx=INT_MIN;

    deque<int>d;
    vector<int>ans;

    for(int i=0;i<k-1;i++){
        if(d.empty()){
            d.push_back(i);
        }
        else{
            while(!d.empty() && arr[i]>arr[d.back()]){
                d.pop_back();
            }
            d.push_back(i);
        }
    }  
    
        
    for(int i=k-1;i<n;i++){
        while(!d.empty() && arr[i]>arr[d.back()]){
            d.pop_back();
        }
        d.push_back(i);
        if(d.front()<=i-k){
            d.pop_front();
        }
        ans.push_back(arr[d.front()]);
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}

//O(N)