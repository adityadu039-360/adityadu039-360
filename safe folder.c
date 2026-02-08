#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char path[500];

    printf("Enter full file path:\n");
    scanf("%s",path);
    system(path);
    return 0;
}
