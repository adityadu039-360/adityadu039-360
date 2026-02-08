#include <stdio.h>
#include <string.h>
int main() {
    char str1[30]="Hello";
    char str2[30]="World";
    printf("length of the string:%lu\n",strlen(str1));
    strcat(str1,str2);
    printf("After consentration:%s \n",str1);
    strcpy(str1,str2);
    printf("Copied string:%s \n",str2);
    printf("Comparission result:%d\n",strcmp(str1,str2));
}
