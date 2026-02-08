#include <stdio.h>
int main(int argc, char *argv[]) {
    int i;
printf("Total arrguments: %d\n",argc);
for(i=0;i<argc;i++){
printf("Arrgument %d:%s\n",i,argv[i]);
}
return 0;
}
