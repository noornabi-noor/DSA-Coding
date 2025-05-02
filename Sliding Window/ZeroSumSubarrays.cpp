// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }

//     int total=0;

//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int s=0;
//             for(int k=i;k<=j;k++){
//                 s+=v[k];
//             }
//             if(s==0){
//                 total++;
//             }
//         }
//     }

//     cout<<total<<"\n";

//     return 0;
// }


//Time complexity: O(n^3)



#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int total=0;

    for(int i=0;i<n;i++){
        int s=0;
        for(int j=i;j<n;j++){
            s+=v[j]; 
            if(s==0){
                total++;
            }    
        }
        
    }

    cout<<total<<"\n";

    return 0;
}


//Time: O(N^2)





// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }

//     int pre_sum=0;
//     vector<int>pre;
//     unordered_map<int,int>mp;

//     mp[0]=1;
//     int total=0;

//     for(int i=0;i<n;i++){
//         pre_sum+=v[i];

//         if(mp.count(pre_sum)){
//             total+=mp[pre_sum];
//         }

//         mp[pre_sum]++;
//     }

//     cout<<total<<"\n";

//     return 0;
// }

//10 6 -1 -3 4 -2 2 4 6 -12 -2

// 12
// 6 4 -5 1 8 3 2 -10 -4 0 4 -9

//Final Time Complexity:O(n)