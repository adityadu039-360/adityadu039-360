#include <stdio.h>
int* getElements(int arr[],int index) {
    return &arr[index];
}
int main() {
    int arr[5]={4,8,12,16,20};
    int *p=getElements(arr,2);
    printf("Elements at index2=%d\n",*p);
    return 0;
}