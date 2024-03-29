#include <stdio.h>

int sumofdigit(int num);

int main(){
    int n;
    int sum;
    scanf("%d",&n);

    sum = sumofdigit(n);

    printf("%d",sum);

    return 0;
}

int sumofdigit(int num){
    if(num == 0){
        return num;
    }
    else{
        return ((num%10) + sumofdigit(num/10));
    }
}
