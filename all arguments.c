#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[]) {
if(argc !=3)
printf("Usage: ./a.exe num1 num2\n");
return 1;
int a=atoi(argv[1]);
int b=atoi(argv[2]);
printf("sum=%d\n",a+b);
return 0;
}
