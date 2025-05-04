// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,k;
//     cin>>n>>k;

//     vector<int>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }

//     queue<int>q;

//     for(int i = 0; i <= n - k; i++) {
//         queue<int> q;
//         for(int j = i; j < i + k; j++) {
//             q.push(v[j]);
//         }
//         while(!q.empty()) {
//             cout << q.front() << " ";
//             q.pop();
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Time Complexity = O((n - k + 1) * k) ≈ O(nk)
//Space: O(k)





#include<bits/stdc++.h>
using namespace std;

void display(queue<int>q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<"\n";
}

int main(){
    int n,k;
    cin>>n>>k;

    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    queue<int>q;

    for(int i = 0; i < k-1; i++) {
        q.push(v[i]);
    }
    for(int i=k-1;i<n;i++){
        q.push(v[i]);
        display(q);
        q.pop();
    }

    return 0;
}


//time:O(NK)
