#include <stdio.h>
#include <time.h>
#include "mylib/mylib.h"

int main(void) {
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);

    int start = clock();
    FibonnaciIterative(N);
    int end = clock();
    double duration = (double)(end-start)/CLOCKS_PER_SEC;
    printf("time elapsed: %fs\n", duration);

    return 0;
}