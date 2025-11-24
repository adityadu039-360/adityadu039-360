#include <stdio.h>
int main() {
int arr[] = {10,20,30,40,50,60,70,};
int n=7;
int key,low=0,high=n-1,mid;
int found=0;
printf("Enter an element to search: ");
scanf("%d",&key);
while(low<=high) {
    mid=(low<=high)/2;
    if(arr[mid]==key) {
        printf("Element %d found at position %d.\n",key,mid+1);
        found=1;
        break;

    }
    else if(key<arr[mid])
        high=mid-1;
    else
        low=mid+1;
}
if(!found)
     printf("element not found.\n");
     return 0;

}
