#include <stdio.h>

int sum(int,int);

int main(){
    int a,b,ans;
    scanf("%d %d",&a,&b);
    printf("%d",sum(a,b));
}

int sum(int a,int b){
    if(a == b){
        return a;
    }
    else
        return a+sum(a+1,b);
}
