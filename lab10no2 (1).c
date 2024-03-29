#include <stdio.h>
#include <string.h>

int ispalindrome(char *string);

int main(){
    char text[100];
    gets(text);
    if(ispalindrome(text)){
        printf("%s is palindrome",text);
    }
    else
        printf("%s is not palindrome",text);
    return 0;
}

int ispalindrome(char *string)
{
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
