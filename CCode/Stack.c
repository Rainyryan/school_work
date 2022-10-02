#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct element {                        // elements of the stack
        int data;
        struct element *next;   // point to the next element in the stack
};

struct head {
        int size;                               // record the size of the stack
        struct element *next;   // point to the bottom element in the stack if there is any
        struct element *top;    // point to the top of the stack
};

void print_stack(struct head *stack_p);
void push(struct head *stack_p, int data);      // put an element to the top of the stack
struct element *pop(struct head *stack_p);      // remove an element from the top of the stack

int main(void) {
        // stack declaration
        struct head stack_head;
        stack_head.size = 0;
        stack_head.next = NULL;
        stack_head.top = NULL;

        // read instructions
        int num, data;
        char command[5];
        scanf("%d", &num);
        for (int i = 0; i < num; ++i) {
                scanf("%4s", command);
                if (strcmp(command, "push") == 0) {     // push command, call push()
                        scanf("%d", &data);
                        push(&stack_head, data);
                }
                else if (strcmp(command, "pop") == 0) { // pop command, call pop()
                        struct element *e = pop(&stack_head);
                        free(e);
                }
        }
        print_stack(&stack_head);
        return 0;
}

void print_stack(struct head *stack_p) {
        printf("%d\n", stack_p->size);
        for (struct element *ptr = stack_p->next; ptr != NULL; ptr = ptr->next)
                printf("%d ", ptr->data);
}
// Your code goes here
void push(struct head *stack_p, int data) {     // create an element and push it to the top of the stack
    struct element* tmp=(struct element*)malloc(sizeof(struct element));
    
    tmp->data=data;
    tmp->next=NULL;
    stack_p->size+=1;

    if (stack_p->next) {
        stack_p->top->next=tmp;
        stack_p->top=tmp;
    } else {
        stack_p->top=tmp;
        stack_p->next=tmp;
    }
}

struct element* pop(struct head *stack_p) {     // return the element which is popped from the stack

    struct element* curr = (stack_p->next);
    struct element* top = stack_p->top;

    if(stack_p->size)stack_p->size-=1;
    if(!stack_p->size){
        stack_p->next=NULL;
        stack_p->top=NULL;
    }else{
        while(curr->next!=stack_p->top)curr=curr->next;
        curr->next=NULL;
        stack_p->top=curr;
    }
    return top;
}

/*
5
push 1
push 2
push 3
pop
pop

5
push 1
pop
push 2
push 3
pop
*/