// Recursive Fibonacci 
#include<stdio.h>

int memo[1000];  

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    if(memo[n] != -1)
        return memo[n];

    memo[n] = fib(n-1) + fib(n-2);
    return memo[n];
}

int main(){
    int n;
    scanf("%d" , &n);

    for(int i=0 ; i<=n; i++){
        memo[i] = -1;
    }

    for(int i=0 ; i<n; i++){
        printf("%d " , fib(i));
    }

    return 0;
}



// Iterative Fibonacci
#include<stdio.h>

int fib(int n) {
    if(n==0) return 0;
    if(n==1) return 1;

    int prev2 = 0;
    int prev1 = 1;
    int next;

    for(int i = 2; i <= n; i++){
         next = prev1 + prev2;
         prev2 = prev1;
         prev1 = next;
    }

    return prev1;
}

int main(){
    int n;
    scanf("%d" , &n);

    for (int i = 0; i < n ; i++){
        printf("%d " , fib(i));
    }

    return 0;
}