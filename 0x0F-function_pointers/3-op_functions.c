#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - function
 * @a: The first
 * @b: The second
 * Return: The sum
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - function
 * @a: The first
 * @b: The second
 * Return: The difference
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - function
 * @a: The first
 * @b: The second
 * Return: The product
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - function
 * @a: The first
 * @b: The second
 * Return: The quotient
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - function
 * @a: The first
 * @b: The second
 * Return: The remainder
 */
int op_mod(int a, int b)
{
return (a % b);
}
