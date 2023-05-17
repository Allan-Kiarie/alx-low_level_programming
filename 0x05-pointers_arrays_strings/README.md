# 0x05. C - Pointers, arrays and strings

## Description

This project was completed during the **Full Stack Software Engineeering** program at **ALX**. The concepts learned during this project include:

* What are pointers and how to use them
* What are arrays and how to use them
* What are the differences between pointers and arrays
* How to use strings and how to manipulate them
* Scope of variables

## Files

* All the files are written in C Programming Language. 
* All the C programs were written according to Betty Coding Style
* Files tested on Ubuntu 20.04 LTS

| Files | Description |
| ------ | --------- |
| `0-reset_to_98.c` | Takes a pointer to an `int` as parameter and updates the value it points to to `98` |
| `1-swap.c` | Swaps the values of two integers |
| `2-strlen.c` | Returns the length of a string |
| `3-puts.c` | Prints a string, followed by a new line, to `stdout` |
| `4-print_rev.c` | Prints a string, in reverse, followed by a new line |
| `5-rev_string.c` | Reverses a string |
| `6-puts2.c` | Prints every other character of a string, starting with the first character, followed by a new line |
| `7-puts_half.c` | Prints half of a string, followed by a new line |
| `8-print_array.c` | Prints n elements of an array of integers, followed by a new line |
| `9-strcpy.c` | Copies the string pointed to by src, including the terminating null byte (`\0`), to the buffer pointed to by dest |
| `100-atoi.c` | Converts a string to an integer |

## Tasks
**0. 98 Battery st.**
* Write a function that takes a pointer to an `int` as parameter and updates the value it points to to `98`.

* Prototype: `void reset_to_98(int *n)`

**1. Don't swap horses in crossing a stream**
* Write a function that swaps the values of two integers.

* Prototype: `void swap_int(int *a, int *b)`

**2. This report, by its very length, defends itself against the risk of being read**
* Write a function that returns the length of a string.

* Prototype: `int _strlen(char *s)`

**3. I do not fear computers. I fear the lack of them**
* Write a function that prints a string, followed by a new line, to `stdout`.

* Prototype: `void _puts(char *str)`

**4. I can only go one way. I've not got a reverse gear**
* Write a function that prints a string, in reverse, followed by a new line.

* Prototype: `void print_rev(char *s)`

**5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes**
* Write a function that reverses a string.

* Prototype: `void rev_string(char *s)`

**6. Half the lies they tell about me aren't true**
* Write a function that prints every other character of a string, starting with the first character, followed by a new line.

* Prototype: `void puts2(char *str)`

**7. Winning is only half of it. Having fun is the other half**
* Write a function that prints half of a string, followed by a new line.

* Prototype: `void puts_half(char *str)`
* The function should print the second half of the string
* If the number of characters is odd, the function should print the last n characters of the string, where `n = (length_of_the_string - 1) / 2`

**8. Arrays are not pointers**
* Write a function that prints n elements of an array of integers, followed by a new line.

* Prototype: `void print_array(int *a, int n)`
* where `n` is the number of elements of the array to be printed
* Numbers must be separated by comma, followed by a space
* The numbers should be displayed in the same order as they are stored in the array
* You are allowed to use `printf`

**9. strcpy**
* Prototype: char *_strcpy(char *dest, char *src);
* Write a function that copies the string pointed to by `src`, including the terminating null byte (`\0`), to the buffer pointed to by dest.

* Return value: the pointer to` dest`

**10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers**
* Write a function that convert a string to an integer.

* Prototype: `int _atoi(char *s)`
* The number in the string can be preceded by an infinite number of characters
* You need to take into account all the `-` and `+` signs before the number
* If there are no numbers in the string, the function must return `0`
* You are not allowed to use long
* You are not allowed to declare new variables of “type” array
* You are not allowed to hard-code special values
* We will use the `-fsanitize=signed-integer-overflow` gcc flag to compile your code
