#include <stdio.h>
int main() {
    int arr[]={5,10,15,20,25};
    int *ptr=arr;
    printf("ptr=%p,*ptr=%d\n",*ptr);
    ptr++;
    //(adds sizeof(int))
    printf("after ptr++:ptr=%p,*ptr=%d\n",ptr,*ptr);
    ptr +=2;
    printf("After ptr +=2: ptr=%p, 8ptr=%d\n",ptr,*ptr);
    return 0;
}