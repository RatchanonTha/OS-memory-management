#include <stdio.h>
#include <stdlib.h>

int *value;
int a,b,c;
void call_stack(int n) {
    if (n==0) {
        return;
    }
    else {
        int local_var = 5;
        printf("stack address of local var is %p.\n",&local_var);
        value = (int *)malloc(sizeof(int) * n);      
        printf("heap address from malloc is %p.\n",value);
        printf("\n");
    }
    call_stack(n-1);
}

int main() {
    call_stack(3);
    printf("heap address of a is %p.\n",&a);
    printf("heap address of b is %p.\n",&b);
    printf("heap address of c is %p.\n",&c);
    printf("You can see the more local var, the less stack address.\n");
    printf("And you can also see the more malloc and the more global var, the more heap address.\n");
    free(value);

    return 0;
}

