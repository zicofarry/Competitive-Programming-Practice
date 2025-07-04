#include "cfibosta.h" // include header "cfibosta.h"

// procedure to create empty stack
void createEmpty(stack *S){
    (*S).top = NULL;
}

// procedure to push element to the stack
void push(box tmp, stack *S){
    element* new;
    new = (element *) malloc (sizeof (element));

    new->container = tmp;
    if((*S).top == NULL){
        // if stack is empty
        new->next = NULL;
    }else{
        // if stack is not empty
        new->next = (*S).top;
    }
    (*S).top = new;
    new = NULL;
}

// procedure to print the element
void printElement(element* point, int i){
    if(i % 2 == 0){
        printf("-%03d\n", point->container.num);
    }else{
        for(int j = 0; j < (i - (i/2+1))* 4; j++) printf(" ");
        if(point->next != NULL){
            printf("%03d", point->container.num);
        }else{
            printf("%03d\n", point->container.num);
        }
    }
}

// procedure to print the stack
void printStack(stack S){
    if(S.top != NULL){
        element* point = S.top;
        int i = 1;
        while(point != NULL){
            printElement(point, i);
            
            /* iteration */
            point = point->next;
            i++;
        }
    }else{
        /* process if the stack is empty */
        printf("empty stack\n");
    }
}

void solve(){
    // declare and input value
    int n; scanf("%d", &n);
    int a, b; scanf("%d %d", &a, &b);
    
    // declare and create an empty stack S
    stack S;
    createEmpty(&S);

    // declare box new, and push to the stack
    box new;
    new.num = a; push(new, &S);
    new.num = b; push(new, &S);

    // loop until n-2 to push the element
    for(int i = 0; i < n-2; i++){
        new.num = S.top->container.num + S.top->next->container.num;
        push(new, &S);
    }

    // print stack
    printStack(S);
}