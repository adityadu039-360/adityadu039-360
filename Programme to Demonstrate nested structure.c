//Programme to Demonstrate nested structure
#include <stdio.h>
struct Date{
    int day;
    int mon;
    int yr;
};
struct student {
    int id;
    char name[10];
    struct Date dob;
};
int main(){
    struct student s1={101,"Adithya",{28,07,2007}};
    printf("Name:%s\n",s1.name);
    printf("DoB:%d-%d-%d\n",s1.dob.day,s1.dob.mon,s1.dob.yr);
    return 0;
}
