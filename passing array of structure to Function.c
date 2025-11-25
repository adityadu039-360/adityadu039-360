//passing array of structure to Function
#include <stdio.h>
struct stud{
    int id;
    char name[20];
};
void display(struct stud s[],int n)
{
   for(int i=0;i<n;i++)
    printf("ID:%d, Name:%s\n",s[i].id,s[i].name);


}
int main(){
struct stud s[3]={{101,"Anu"},{102,"Vasu"},{103,"Kiran"}};
display(s,3);
return 0;
}

