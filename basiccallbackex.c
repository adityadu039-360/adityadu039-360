#include <stdio.h>
void sayHello() {
    printf("Hello,Student! You just called me back\n");

}
void studentWork(void(*callbackFunc)()) {
    printf("students is doing home work...\n");
    callbackFunc();
}
int main() {
    studentWork(sayHello);
    return 0;
}
