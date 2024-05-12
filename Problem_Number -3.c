#include <stdio.h>

int main() {
    int a, n, sum = 0, count = 0;
    float average;

    printf("Enter the start value 'a': ");
    scanf("%d", &a);
    printf("Enter the end value 'n': ");
    scanf("%d", &n);

    for(int i = a; i <= n; i++) {
        if(i % 2 != 0) {
            sum += i;
            count++;
        }
    }
    average = (count > 0) ? (float)sum / count : 0;

    printf("Sum of odd numbers between %d and %d: %d\n", a, n, sum);
    printf("Average of odd numbers: %.2f\n", average);

    return 0;
}