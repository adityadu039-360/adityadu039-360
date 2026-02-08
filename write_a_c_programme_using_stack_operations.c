#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    if (top < MAX - 1) {
        stack[++top] = c;
    }
}

void pop() {
    if (top >= 0) {
        top--;
    }
}

void display() {
    for (int i = 0; i <= top; i++) {
        printf("%c", stack[i]);
    }
    printf("\n");
}

int main() {
    char name[100];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character
    name[strcspn(name, "\n")] = 0;

    // Push characters onto the stack
    for (int i = 0; i < strlen(name); i++) {
        push(name[i]);
    }

    printf("Your name in reverse order (stack display): ");
    display();

    printf("Your name in original order (popping from stack): ");
    while (top >= 0) {
        printf("%c", stack[top]);
        pop();
    }
    printf("\n");

    return 0;
}
