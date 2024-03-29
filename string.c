#include <stdio.h>
#include <string.h>

int ispalindrome(char string[]);

int main(){
    int n,i;
    scanf("%d\n",&n);
    char text[n][100];
    for(i = 0;i < n;i++){
        scanf("%s",text[i]);
    }

    char temp[100];

    for(i = 0;i<n;i++){
        strcpy(temp,text[i]);
        if(ispalindrome(temp)){
            printf("%s is palindrome\n",temp);
        }
    }

}

int ispalindrome(char string[]){
    int len = strlen(string);
    int middle = len / 2;
    int i;
    for(i = 0;i<middle;i++){
        if(string[i] != string[len - i - 1]){
            return 0;
        }
    }
    return 1;
}
