#include <stdio.h>
int main() {
int arr[5]={12,23,35,47,59};
int n=5;
int key,i,found=0;
printf("Enter element to search: ");
scanf("%d",&key);
for (i=0;i<n;i++) {
    if (arr[i]==key) {
        printf("Element %d found at position %d \n",key,i+1);
        found = 1;
        break;
    }
}
if(!found)
    printf("Element not found.\n");
return 0;
}
