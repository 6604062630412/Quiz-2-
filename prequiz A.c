#include <stdio.h>
#include <string.h>

typedef struct {
    char name[64];
    char phoneNumber[32];
} phoneBook;
phoneBook directory[50];

void addRecord(char *someone, char *pnumber);

char *searchPhone(char *name);

int Idx = 0;

int main(){
    int n;
    scanf("%d\n",&n);
    int i;
    char tempname[64];
    char tempnum[32];
    for(i = 0;i<n;i++){
        scanf("%63s %32s",tempname,tempnum);
        addRecord(tempname,tempnum);
    }

    char temp[100];
    for(i = 0;i<n;i++){
        gets(temp);
        printf("%s\n",searchPhone(temp));
    }
}

void addRecord(char *someone, char *pnumber){
    strcpy(directory[Idx].name,someone);
    strcpy(directory[Idx].phoneNumber,pnumber);
    Idx++;
}

char *searchPhone(char *name){
    int i;
    for(i = 0;i<Idx;i++){
        if(!(strcmp(directory[i].name,name))){
            return directory[i].phoneNumber;
        }
    }
    return "N/A";
}
