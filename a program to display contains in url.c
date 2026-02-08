#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[] = "C:\\Users\\adith\\Desktop\\New Text Document (2).txt";
    char command[300];

    printf("Opening file...\n");

    sprintf(command, "cmd /c start \"\" \"%s\"", filename);
    system(command);

    return 0;
}
