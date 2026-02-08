#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *data;

    data = (int *)malloc(4 * sizeof(int));

    if (data == NULL)
    {
        printf("Allocation failed!\n");
        return 1;
    }

    printf("Memory allocated successfully!\n");

    free(data);

    printf("Memory freed successfully!\n");

    return 0;
}
