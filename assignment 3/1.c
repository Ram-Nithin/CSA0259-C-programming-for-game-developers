#include <stdio.h>

int checkPrime(int n);

int main()
{
    int low, high, i, flag;

    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &low, &high);

    printf("Prime numbers between %d and %d are: ", low, high);

    for (i = low + 1; i < high; ++i) {
        flag = checkPrime(i);

        if (flag == 1)
            printf("%d ", i);
    }

    return 0;
}

// Function to check prime number
int checkPrime(int n)
{
    int i, isPrime = 1;

    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    return isPrime;
}

