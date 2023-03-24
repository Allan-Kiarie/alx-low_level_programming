#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/**
 * add - adds a to b
 * @a: integer
 * @b: integer
 * Return: a + b
 */

int add(int a, int b)
{
    return (a + b);
}

/**
 * sub - adds a to b
 * @a: integer
 * @b: integer
 * Return: a - b
 */
int sub(int a, int b)
{
    return (a - b);
}

/**
 * mul - adds a to b
 * @a: integer
 * @b: integer
 * Return: a * b
 */
int mul(int a, int b)
{
    return (a * b);
}

/**
 * div - adds a to b
 * @a: integer
 * @b: integer
 * Return: a / b
 */
int div(int a, int b)
{
    return (a / b);
}

/**
 * mod - adds a to b
 * @a: integer
 * @b: integer
 * Return: a + b
 */
int mod(int a, int b)
{
    return (a % b);
}
