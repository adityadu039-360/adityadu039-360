#include<stdio.h>
struct student{
int Id;
char Name[20];
char Sem[20];
char Branch[20];
char Dep[20];
};
int main(){
struct student s[5];
int i;
for(i=0;i<5;i++){
    printf("Enter the student details %d\n",i+1);
    printf("Id:");
    scanf("%d",&s[i].Id);
    printf("Name:");
    scanf("%s",&s[i].Name);
    printf("Sem:");
    scanf("%s",s[i].Sem);
    printf("Branch:");
    scanf("%s",s[i].Branch);
    printf("Departement:");
    scanf("%s",s[i].Dep);
}
    printf(">_________________________\n");
    printf("\n%-10s%-20s%-5s%-10s%-20s\n","Id","Name","Sem","Branch","Dep");
    printf("_______________________________\n");
    for(i=0;i<5;i++){
            printf("%-10s%-20s%-5s%-10s%-20s",s[i].Id,s[i].Name,s[i].Sem,s[i].Branch,s[i].Dep);

    }
    return 0;

}
