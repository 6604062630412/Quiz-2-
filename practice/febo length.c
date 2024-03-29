#include <stdio.h>

unsigned long long febo(int);

int main(){
    int num;
    scanf("%d",&num);

    int i;
    for(i=0;i<num;i++){
        printf("%llu ",febo(i));
    }
}

unsigned long long febo(int n){
    if(n < 2){
        return n;
    }
    else
        return febo(n-1)+febo(n-2);
}
