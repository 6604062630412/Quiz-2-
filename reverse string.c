#include <stdio.h>
#include <string.h>

char *reverse(char *t);

int main(){
    int n;
    int i;
    scanf("%d\n",&n);

    char text[n][100];

    for(i = 0;i<n;i++){
        scanf("%s",text[i]);
    }

    for(i = 0;i<n;i++){
        printf("%s\n",reverse(text[i]));
    }
}

char* reverse(char *t){
    int len = strlen(t);
    int middle = len / 2;
    char temp;
    int i;
    for(i = 0;i<middle;i++){
        temp = t[i];
        t[i] = t[len - i - 1];
        t[len - i - 1] = temp;
    }
    return t;
}
