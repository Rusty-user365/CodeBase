#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define MAX 5 // Maximum size of the stack

struct Stack {
    int16_t arr[MAX]; // Use int16_t for 16-bit compatibility
    int16_t top;
};

// Function prototypes
void initialize(struct Stack *s);
void push(struct Stack *s, int16_t element);
int16_t pop(struct Stack *s);
void display(struct Stack *s);
int isFull(struct Stack *s);
int isEmpty(struct Stack *s);

int main() {
    struct Stack stack;
    initialize(&stack);

    int choice;
    int16_t element;

    do {
        printf("\nMenu\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (!isFull(&stack)) {
                    printf("Enter the element to push: ");
                    scanf("%hd", &element);
                    push(&stack, element);
                } else {
                    printf("Stack Overflow! Cannot push more elements.\n");
                }
                break;

            case 2:
                if (!isEmpty(&stack)) {
                    element = pop(&stack);
                    printf("Popped element: %hd\n", element);
                } else {
                    printf("Stack Underflow! Cannot pop from an empty stack.\n");
                }
                break;

            case 3:
                display(&stack);
                break;

            case 4:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 4);

    return 0;
}

void initialize(struct Stack *s) {
    s->top = -1;
}

void push(struct Stack *s, int16_t element) {
    s->arr[++s->top] = element;
    printf("Element %hd pushed onto the stack.\n", element);
}

int16_t pop(struct Stack *s) {
    return s->arr[s->top--];
}

void display(struct Stack *s) {
    if (!isEmpty(s)) {
        printf("Stack elements: ");
        for (int16_t i = 0; i <= s->top; ++i) {
            printf("%hd ", s->arr[i]);
        }
        printf("\n");
    } else {
        printf("Stack is empty.\n");
    }
}

int isFull(struct Stack *s) {
    return s->top == MAX - 1;
}

int isEmpty(struct Stack *s) {
    return s->top == -1;
}
