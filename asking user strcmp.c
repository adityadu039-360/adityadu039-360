#include <stdio.h>
#include <string.h>
int main(){
    char s1[20];
    char s2[20];
    printf("Enterv name you want to compare: ");
    scanf("%s /n ",&s1);
    printf("Enter name you want to compare: ");
    scanf("%s /n",&s2);
    int result=strcmp(s1,s2);
    if(result==0){
        printf("strings are equal");
    }
    else if(result>0){
        printf("s1 is greater");
    }
    else {
        printf("s2 is greater");
    }
}
