#include <stdio.h>

int gcd(int a, int b);

int main(void)
{
    int first_number;
    int second_number;
    int result;

    printf("Enter first number: ");
    scanf("%d", &first_number);

    printf("Enter second number: ");
    scanf("%d", &second_number);

    result = gcd(first_number, second_number);

    printf("Greatest Common Divisor: %d\n", result);

    return 0;
}

int gcd(int a, int b)
{
    if (b == 0) {
        
        return a;
    }

    
    
    return gcd(b, a % b);
}
