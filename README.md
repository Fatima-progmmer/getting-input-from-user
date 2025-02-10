

# Getting Input from User in C

This repository demonstrates how to take input from the user in C programming. It covers various methods such as reading strings, integers, and floats using functions like `scanf` and `gets` (though `gets` is not recommended due to safety concerns).

## Features

- **Integer Input**: How to accept and display integer input from the user.
- **Floating Point Input**: How to accept and display floating-point numbers.
- **String Input**: How to handle string inputs from the user, including potential pitfalls with buffer overflow.
- **Basic Input Functions**: Examples using `scanf`, `gets`, `fgets`, etc.

## Technologies Used

- C Programming Language

## Example Code

### Reading an Integer from User:

```c
#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
    return 0;
}
```

### Reading a Float from User:

```c
#include <stdio.h>

int main() {
    float num;
    printf("Enter a floating-point number: ");
    scanf("%f", &num);
    printf("You entered: %.2f\n", num);
    return 0;
}
```

### Reading a String from User (Using `fgets`):

```c
#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("You entered: %s\n", str);
    return 0;
}
```

## How to Run

1. Clone the repository:
   ```
   git clone https://github.com/Fatima-progmmer/getting-input-from-user
   ```
2. Open any of the `.c` files in your text editor or IDE.
3. Compile and run the code using a C compiler, such as GCC:
   ```bash
   gcc filename.c -o output
   ./output
   ```

## License

This project is open-source and available under the MIT License.

