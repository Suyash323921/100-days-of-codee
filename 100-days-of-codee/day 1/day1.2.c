#include<stdio.h>
int main()
{
    int a, b, sum, diff, prod, quot;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    diff = a - b;
    prod = a * b;
    quot = a / b;
    printf("sum = %d\n", sum);
    printf("diff = %d\n", diff);
    printf("prod = %d\n", prod);
    printf("quot = %d\n", quot);
}
