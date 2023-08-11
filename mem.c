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
        value = (int *)malloc(sizeof(int) * n);      
        printf("heap address is %p.\n",value);
        printf("\n");
    }
    call_stack(n-1);
}

int main() {
    call_stack(3);
    printf("You can see the more local var, the less stack address.\n");
    printf("And you can also see the more malloc, the more heap address.\n");
    free(value);
    return 0;
}

