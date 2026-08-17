#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct node {
    char data;
    struct node *next;
};

// Push
struct node* push(struct node* top, char x) {
    struct node* newnode =
        (struct node*)malloc(sizeof(struct node));

    newnode->data = x;
    newnode->next = top;

    return newnode;
}

// Pop
struct node* pop(struct node* top, char *x) {
    struct node *temp;

    if (top == NULL) {
        return NULL;
    }

    temp = top;
    *x = top->data;
    top = top->next;

    free(temp);

    return top;
}

// Operator precedence
int precedence(char x) {
    if (x == '^')
        return 3;

    if (x == '*' || x == '/')
        return 2;

    if (x == '+' || x == '-')
        return 1;

    return 0;
}

int main() {

    struct node* top = NULL;

    char infix[100], postfix[100];
    int i, j = 0;
    char x;

    //printf("Enter infix expression: ");
    scanf("%s", infix);

    for (i = 0; infix[i] != '\0'; i++) {

        // Operand
        if (isalnum(infix[i])) {
            postfix[j++] = infix[i];
        }

        // Opening parenthesis
        else if (infix[i] == '(') {
            top = push(top, infix[i]);
        }

        // Closing parenthesis
        else if (infix[i] == ')') {

            while (top != NULL && top->data != '(') {
                top = pop(top, &x);
                postfix[j++] = x;
            }

            // Remove '('
            if (top != NULL) {
                top = pop(top, &x);
            }
        }

        // Operator
        else {

            while (top != NULL &&
                   top->data != '(' &&
                   precedence(top->data) >= precedence(infix[i])) {

                top = pop(top, &x);
                postfix[j++] = x;
            }

            top = push(top, infix[i]);
        }
    }

    // Pop remaining operators
    while (top != NULL) {
        top = pop(top, &x);
        postfix[j++] = x;
    }

    postfix[j] = '\0';

    printf("%s\n", postfix);

    return 0;
}