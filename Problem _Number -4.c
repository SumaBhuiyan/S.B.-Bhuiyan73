#include <stdio.h>

int main() {
    int a, n, i, j, isPrime;
    printf("Enter the lower bound 'a': ");
    scanf("%d", &a);
    printf("Enter the upper bound 'n': ");
    scanf("%d", &n);

    printf("Prime numbers between %d and %d are: ", a, n);

    for (i = a; i <= n; i++) {
        isPrime = 1;
        if (i == 1) isPrime = 0; 
        else {
            for (j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    isPrime = 0;
                    break; 
                }
            }
        }

        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    printf("\n"); 

    return 0;
}