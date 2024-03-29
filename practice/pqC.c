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

void printMaxScore(Student , int);

int Ind;
int main(){
    int n;
    scanf("%d\n",&n);

    Student s[n];

    for(Ind = 0;Ind<n;Ind++){
        scanf("%15s %19s",&s[Ind].name,&s[Ind].surname);
        scanf("%d %d %d %d %d",&s[Ind].score[0],&s[Ind].score[1],&s[Ind].score[2],&s[Ind].score[3],&s[Ind].score[4]);
        fflush(stdin);
    }
    readStudentData(s);
}

void readStudentData(Student *s){
    int i,j;
    int n;
    scanf("%d",&n);
    for(i = 0;i<n;i++){
        int num;
        scanf("%d",&num);
        num--;
        int max = 0;
        int count = 0;
        for(j = 0;j<Ind;j++){
            if(s[j].score[num] > max){
                max = s[j].score[num];
                count = j;
            }
        }
        printMaxScore(s[count],num);
    }

}

void printMaxScore(Student data, int num){
    printf("%s %d\n",data.name,data.score[num]);
}


