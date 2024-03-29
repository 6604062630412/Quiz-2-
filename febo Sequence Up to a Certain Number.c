#include <stdio.h>

unsigned long long febo(int);
int main(){
    int n;
    scanf("%d",&n);
    int i = 0;
    while(febo(i) <= n){
        printf("%llu ",febo(i));
        i++;
    }
}

unsigned long long febo(int n){
    if(n < 2)
        return n;
    else
        return febo(n-1) + febo(n-2);
}
