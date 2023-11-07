# Password Checker

The Password Checker C library, `password_checker.c`, provides functions to assess the strength of passwords based on various criteria. It includes checks for length, character types (upper and lower case letters, numbers), and the presence of specific strings (first and last names). The library is designed to help you evaluate whether a password meets security requirements.

## Prerequisites

Before using this library, ensure you have a C compiler (e.g., GCC) installed on your system.

## Compilation

To compile the library, use the following command:

```bash
gcc -c password_checker.c -o password_checker.o
```

## Functions

The library includes the following functions:

### `bool check_length(const char *password)`

Returns `true` if the length of the password is at least 10 characters, `false` otherwise.

### `bool check_upper(const char *password)`

Returns `true` if the password contains at least one uppercase letter, `false` otherwise.

### `bool check_lower(const char *password)`

Returns `true` if the password contains at least one lowercase letter, `false` otherwise.

### `bool check_range(char letter, char lower, char upper)`

Returns `true` if the character `letter` is within the range `[lower, upper]`, `false` otherwise.

### `bool check_number(const char *password)`

Returns `true` if the password contains at least one digit (number), `false` otherwise.

### `bool check_name(const char *first_name, const char *last_name, const char *password)`

Returns `true` if neither the `first_name` nor the `last_name` is found in the `password`, `false` otherwise.

### `bool check_password(const char *first_name, const char *last_name, const char *password)`

Returns `true` if the `password` meets the following conditions:

- Length of at least 10 characters.
- Contains at least one uppercase letter.
- Contains at least one lowercase letter.
- Contains at least one digit (number).
- Neither the `first_name` nor the `last_name` is found in the `password`.

## Example

Here's how you can use the library to check a password in your C program:

```c
#include "password_checker.h"
#include <stdio.h>

int main() {
    const char *first_name = "John";
    const char *last_name = "Doe";
    const char *password = "Password123";

    if (check_password(first_name, last_name, password)) {
        printf("Password meets security requirements.\n");
    } else {
        printf("Password does not meet security requirements.\n");
    }

    return 0;
}
```

## Author

This library was created by Kriti Bhargava.

