#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n-i;j++){
            cout<<' ';
        }

        cout<<'/';

        for (int k=1;k<=2*i-2;k++) {
            cout <<"-";
        }
        
        cout <<"\\"<< "\n";
    }

    //O(N^2)

    for(int i=n;i>=1;i--){

        for(int j=1;j<=n-i;j++){
            cout<<' ';
        }

        cout <<"\\";

        for (int k =1; k<=2*i-2;k++) {
            cout<<"-";
        }

        cout<<'/'<<"\n";
    }

    //O(N^2)

    return 0;
}

// Total: (O(N^2) + O(N^2)) = O(N^2)