#include <stdio.h> 

// recursive function 
int lucas(int n) 
{ 
    // Base cases 
    if (n == 0) 
        return 2; 
    if (n == 1) 
        return 1; 

    // recurrence relation 
    return lucas(n - 1) + 
        lucas(n - 2); 
} 

// Driver Code 
int main() 
{ 
    int n = 9; 
    printf("%d", lucas(n)); 
    return 0; 
}