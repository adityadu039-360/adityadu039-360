#include <stdio.h>

int main(void) {
    int main[2][4] = {{1,2,3,4},{5,6,7,8}};
    for (int i=0;i<2;i++){
    for (int j=0;j<4;j++){
    printf("%d", main[i][j]); //print the number first
    if (j==3)
    printf("\n");  //if last column,print newline
    else
    printf(" ");   // other wise, print space 
    }
}
    return 0;

}
