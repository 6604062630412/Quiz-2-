#include <stdio.h>

unsigned long long febo(int);

int main(){
    int num;
    scanf("%d",&num);

    int i = 0;
    while(febo(i) <= num){
        printf("%llu ",febo(i));
        i++;
    }

}

unsigned long long febo(int n){
    if(n < 2){
        return n;
    }
    else
        return febo(n-1)+febo(n-2);
}
