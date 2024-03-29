#include <stdio.h>

unsigned long long febo(int n);

int main(){
    int n;
    scanf("%d",&n);
    int ary[n];
    int i;
    for(i = 0;i<n;i++){
        scanf("%d",&ary[i]);
    }

    for(i = 0;i<n;i++){
        printf("%llu ",febo(ary[i]));
    }


}

unsigned long long febo(int n){
    if(n < 2){
        return n;
    }
    else
        return febo(n-1) + febo(n-2);
}
