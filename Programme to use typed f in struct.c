
//Programme to use typed f in struct
#include <stdio.h>
typedef struct{
    int emp_id;
    char name[10];
    float salary;

}employee;
int main() {
    employee e1={132,"Adithya",5000000};
    printf("Employe id;%d\n",e1.emp_id);
    printf("Employe name;%s\n",e1.name);
    printf("Employe salary;%2f\n",e1.salary);
    return 0;


}
