#include <stdio.h>
struct student{
    int id;
    char name[20];
    float marks;

};
int main() {
    struct student s1={132,"Adithya",99.5};
    struct student s2={167,"chandan",99.0} ;
    struct student s3={130,"Vignesh",65.5};
    printf("Adithya's Details: \n\n");
    printf("Student Name: %s\n",s1.name);
    printf("Adithya's id: %d\n",s1.id);
    printf("Adithyas Marks: %2f\n\n",s1.marks);

    printf("Chandan's Details:\n\n");
    printf("Student Name: %s\n",s2.name);
    printf("Adithya's id: %d\n",s2.id);
    printf("Adithyas Marks: %2f\n\n",s2.marks);

    printf("Vignesh's Details:\n\n");
    printf("Student Name: %s\n",s3.name);
    printf("Adithya's id: %d\n",s3.id);
    printf("Adithyas Marks: %2f\n",s3.marks);
    return 0;

}
