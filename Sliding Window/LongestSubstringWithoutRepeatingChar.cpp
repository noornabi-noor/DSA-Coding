// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s;
//     cin>>s;

//     unordered_map<char,int>mp;
   
//     int sz=s.size();
//     int mxL=INT_MIN;
//     for(int i=0;i<sz;i++){
       
//         int c=0;
       
//         for(int j=i;j<sz;j++){
            
//             unordered_set<char> ch;

//             for(int k=i;k<=j;k++){
                
//                 ch.insert(s[k]); 
                
//             }

//             if (ch.size() == j - i + 1) {
//                 mxL = max(mxL, j - i + 1);
//             }
            
//         }
        
//     }

//     cout<<mxL<<'\n';
    
//     return 0;
// }


//Time:O(n^3)


#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin>>s;
    int sz=s.size();
    int mxL = 0;
    for(int i=0;i<sz;i++){
        unordered_set<char> ch;
        for(int j=i;j<sz;j++){
            if(ch.count(s[j])){
                break;
            }
            ch.insert(s[j]);
            mxL = max(mxL, j - i + 1);
        }
    }
    cout << mxL << '\n';
    return 0;
}

//O(N^2)