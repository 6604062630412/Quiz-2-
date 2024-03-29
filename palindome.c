#include <stdio.h>
#include <string.h>

int ispolimo(char *s);

int main(){
    int n;
    scanf("%d\n",&n);

    int i;
    char text[n][100];
    char temp[100];

    for(i = 0;i<n;i++){
        scanf("%s",text[i]);
    }

    for(i = 0;i<n;i++){
        strcpy(temp,text[i]);
        if(ispolimo(temp)){
            printf("%s\n",temp);
        }
    }
}

int ispolimo(char *s){
    int len = strlen(s);
    int middle = len / 2;
    int i;
    for(i = 0;i<middle;i++){
        if(s[i] != s[len - i - 1]){
            return 0;
        }
    }

    return 1;
}
