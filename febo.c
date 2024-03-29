#include <stdio.h>

unsigned long long febo(int n);

int main(){
    int n;
    scanf("%d",&n);

    printf("%llu",febo(n));
}

unsigned long long febo(int n){
    if(n < 2){
        return n;
    }
    else
        return febo(n - 2) + febo(n - 1);
}
