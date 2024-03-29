#include <stdio.h>

int Fibonacci(int num);

int main(){
    int n;
    int i;

    scanf("%d",&n);
    int ary[n];

    for(i = 0;i<n;i++){
        scanf("%d",&ary[i]);
    }

    for(i = 0;i<n;i++){
        printf("%d\n",Fibonacci(ary[i]));
    }
}

int Fibonacci(int num)
{

    if(num < 2){
        return num;
    }
    else
        return (Fibonacci(num - 1) + Fibonacci(num - 2));
}
