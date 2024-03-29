#include <stdio.h>

int natural(int,int);

int main(){
    unsigned long long a,b;
    scanf("%llu %llu",&a,&b);
    natural(a,b);
}

int natural(int a,int b){
    if(a > b){
        return;
    }
    else
        printf("%llu ",a);

    natural(a+1,b);
}
