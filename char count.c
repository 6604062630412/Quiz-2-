#include <stdio.h>
#include <string.h>

int main(){
    char text[100];
    char ch;

    gets(text);
    fflush(stdin);
    scanf("%c",&ch);

    int i = 0;
    int count = 0;

    while(text[i] != '\0'){
        if(text[i] == ch){
            count++;
        }
        i++;
    }

    printf("%d",count);
}
