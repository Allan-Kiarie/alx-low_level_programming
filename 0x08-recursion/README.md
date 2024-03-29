# 0x08. C - Recursion

## Description
This project was completed during the ***Full Stack Software Engineering Program*** at **ALX**. Some of the concepts learned during this project include:
* What is recursion
* How to implement recursion
* In what situations you should implement recursion
* In what situations you shouldn’t implement recursion

## Files
* All program files written in C Programming language
* All C files written according to Betty Coding Style
* Tested on Ubuntu 20.04 LTS

| Files | Description |
| ----- | ------------ |
| `0-puts_recursion.c` | Prints a string, followed by a new line |
| `1-print_rev_recursion.c` | Prints a string in reverse |
| `2-strlen_recursion.c` | Returns the length of a string |
| `3-factorial.c` | Returns the factorial of a given number. |
| `4-pow_recursion.c` | Returns the value of `x` raised to the power of `y` |
| `5-sqrt_recursion.c` | Returns the natural square root of a number |
| `6-is_prime_number.c` | Returns `1` if the input integer is a prime number, otherwise return `0` |
| `100-is_palindrome.c` | Returns `1` if a string is a palindrome and `0` if not |
| `101-wildcmp.c` | Compares two strings and returns `1` if the strings can be considered identical, otherwise return `0` |

## Tasks

**0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget*** Write a function that prints a string, followed by a new line
* Prototype: `void _puts_recursion(char *s)`

**1. Why is it so important to dream? Because, in my dreams we are together**
* Write a function that prints a string in reverse
* Prototype:`void _print_rev_recursion(char *s)`

**2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange**
* Write a function that returns the length of a string
* Prototype: `int _strlen_recursion(char *s)`

**3. You mustn't be afraid to dream a little bigger, darling**
* Write a function that returns the factorial of a given number
* Prototype: `int factorial(int n)`
* If `n` is lower than `0`, the function should return `-1` to indicate an error
* Factorial of `0` is `1`

**4. Once an idea has taken hold of the brain it's almost impossible to eradicate**
* Write a function that returns the value of x raised to the power of y
* Prototype: `int _pow_recursion(int x, int y)`
* If `y` is lower than `0`, the function should return `-1`

**5. Your subconscious is looking for the dreamer**
* Write a function that returns the natural square root of a number
* Prototype: `int _sqrt_recursion(int n)`
* If `n` does not have a natural square root, the function should return `-1`

**6. Inception. Is it possible?**
* Write a function that returns `1` if the input integer is a prime number, otherwise return `0`
* Prototype: `int is_prime_number(int n)`

**7. They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we're asleep, we can do almost anything**
* Write a function that returns 1 if a string is a palindrome and 0 if not
* Prototype: `int is_palindrome(char *s)`
* An empty string is a palindrome

**8. Inception. Now, before you bother telling me it's impossible...**
* Write a function that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0
* Prototype: `int wildcmp(char *s1, char *s2)`
* `s2` can contain the special character `*`
* The special char `*` can replace any string (including an empty string)
