#include <stdio.h>
#include <stdlib.h>

int *value;
void call_stack(int n) {
    if (n==0) {
        return;
    }
    else {
        int local_var = 5;
        printf("stack address of local var is %p.\n",&local_var);
    }
    value = (int *)malloc(sizeof(int) * n);      
    call_stack(n-1);
}

int main() {
    call_stack(3);
    printf("you can see the more local var, the less stack address.");

    return 0;
}

