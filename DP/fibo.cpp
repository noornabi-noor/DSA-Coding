#include <bits/stdc++.h>
using namespace std;

// Function to calculate the nth Fibonacci number using recursion
int nthFibonacci(int n){

    if (n <= 1){
        return n;
    }

    return nthFibonacci(n - 1) + nthFibonacci(n - 2);
}

int main(){
    int n = 5;
    int result = nthFibonacci(n);
    cout << result << endl;

    return 0;
}