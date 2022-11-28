#include <stdio.h>
#include <time.h>
#include "mylib/mylib.h"

int main(void) {
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);

    printf("Fibonnaci Iterative for this number is %d = %d\n", N, FibonnaciIterative(N));
    printf("Fibonnaci Recursive for this number is %d = %d\n", N, FibonnaciRecursive(N));

    return 0;
}