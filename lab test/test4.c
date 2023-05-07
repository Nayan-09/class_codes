#include <stdio.h>

int isPerfectSquare(int num) {
    int i;
    for (i = 1; i*i <= num; i++) {
        if (num % i == 0 && num / i == i) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPerfectSquare(num)) {
        printf("%d is a perfect square.", num);
    } else {
        printf("%d is not a perfect square.", num);
    }

    return 0;
}

