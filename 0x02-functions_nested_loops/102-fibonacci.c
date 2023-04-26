#include <stdio.h>

/**
 * main - print first 50 fibonacci starting with 1 and 2.
 *
 * Return: always 0
 */
int main()
{
    long int num1 = 1, num2 = 2, sum;
    int i;
    printf("%ld, %ld", num1, num2);

    for(i = 0; i < 48; i++)
    {
        sum = num1 + num2;
        printf(", %ld", sum);
        num1 = num2;
        num2 = sum;
    }

    printf("\n");
    return (0);
}
