#include <stdio.h>
#include <string.h>

typedef struct {
    char name[16];
    char surname[20];
    char score[5];
    float stotal;
} Student;

void readStudentData(Student *);

void printScore2(Student);

int Ind;

int main(){
    int n,i;
    scanf("%d\n",&n);
    Student s[n];

    for(Ind = 0;Ind < n;Ind++){
        scanf("%15s %19s",&s[Ind].name,&s[Ind].surname);
        scanf("%d %d %d %d %d",&s[Ind].score[0],&s[Ind].score[1],&s[Ind].score[2],&s[Ind].score[3],&s[Ind].score[4]);
        fflush(stdin);
    }
    readStudentData(s);

}

void readStudentData(Student *s){
    int i;
    for(i = 0;i<Ind;i++){
        printScore2(s[i]);
    }
}

void printScore2(Student data){
    printf("%s %d\n",data.name,data.score[1]);
}
