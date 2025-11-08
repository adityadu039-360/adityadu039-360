#include <stdio.h>
int main() {
    int arr[100],n;
    int i, N_positive = 0,
     N_negative =0, N_zero=0;
    int N_even=0, N_odd = 0;
    printf("enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("enter %d elements:\n",n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++) {
        if(arr[i]>0)
        N_positive++;
        else if (arr[i]<0)
        N_negative++;
        else
        N_zero++;

        if(arr[i]%2 == 0)
        N_even++;
        else
        N_odd++;
    }
    printf("\nArray statistics:\n");
    printf("Total elements: %d\n",n);
    printf("Positive numbers:%d\n",N_positive);
    printf("Negative numbers:%d\n",N_negative);
    printf("Zeros: %d\n",N_zero);
    printf("Even numbers: %d\n",N_even);
    printf("Odd numbers : %d\n",N_odd);
    return 0;


}