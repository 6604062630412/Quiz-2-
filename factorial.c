#include <stdio.h>

int factorial(int);

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",factorial(n));
}

int factorial(int n){
    if(n == 0){
        return 1;
    }
    else
        return n*(factorial(n-1));
}
