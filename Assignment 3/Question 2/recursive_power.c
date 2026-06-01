#include <stdio.h>

long long power(int base, int exponent);

int main(void)
{
    int base;
    int exponent;
    long long result;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    result = power(base, exponent);

    printf("Result: %lld\n", result);

    return 0;
}

long long power(int base, int exponent)
{
    if (exponent == 1) {
      
        return base;
    }

 
    return base * power(base, exponent - 1);
}
