#include <stdio.h>

//Programme to use typed f in struct
#include <stdio.h>
typedef struct{
    int emp_id;
    char name[10];
    float salary;

}employee;
int main() {
    float salary;
    employee e1={132,"Adithya",5000000};
    employee e2={122,"chandan",4000000};
    employee e3={12,"Vignesh",3000000};
    employee e4={162,"Harish",2000000};
    employee e5={152,"Honnesh",1000000};
    printf("Employee 1 details\n");
    printf("%d %s %f\n",e1.emp_id,e1.name,e1.salary);

    printf("Employee 2 details\n");
    printf("%d %s %f\n",e2.emp_id,e2.name,e2.salary);
    printf("Employee 3 details\n");
    printf("%d %s %f\n",e3.emp_id,e3.name,e3.salary);
    printf("Employee 4 details\n");
    printf("%d %s %f\n",e4.emp_id,e4.name,e4.salary);
    printf("Employee 5 details\n");
    printf("%d %s %f\n",e5.emp_id,e5.name,e5.salary);

    salary=5000000;

    for (salary<=5000000){
     printf("%d %s %f\n",e1.emp_id,e1.name,e1.salary);
    }

    return 0;


}
