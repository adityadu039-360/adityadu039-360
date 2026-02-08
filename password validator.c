#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char password[50];
    int hasUpper=0,hasDigit=0,hasSymbol=0;
    int i,length,score=0;
    printf("Enter the password:");
    scanf("%s",password);
    length=strlen(password);
    if(length<8||length>15){
            printf("\nResult:INVALID\n");
    printf("Reason:Password must be between 8 to 15 characters.\n");
    printf("It should has one upper case,one numeric and one special character.\n");
    return 0;
    }
    for(i=0;i<length;i++){
            if(isupper(password[i]))hasUpper=1;
            else if(isdigit(password[i]))hasDigit=1;
            else if(!isalnum(password[i]))hasSymbol=1;
    }
    score=hasUpper+hasDigit+hasSymbol;


    printf("\n******Analysis******\n");

    if(!hasUpper||!hasDigit||!hasSymbol){
            printf("STATUS:INVALID");
    printf("MISSING:");
    if(!hasUpper)printf("[Uppercase]");
    if(!hasDigit)printf("[numeric]");
    if(!hasSymbol)printf("[Symbol]");
    printf("\n");
    }else
    {
    printf("STATUS: VALID\n");
    printf("Result:Password accepted.\n");
}

return 0;
}
