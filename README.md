# ft_printf

## 📚 Description

ft_printf is a custom implementation of the standard C `printf` function, developed as part of the 42 School curriculum.

The objective of this project is to reproduce the behavior of `printf`, handling formatted output, variadic functions, and different data types.

---

## ⚙️ Features

- Reimplementation of the `printf` function
- Support for multiple format specifiers
- Handling of variadic arguments using `stdarg.h`
- Output to standard output (file descriptor 1)

---

## 🛠️ Supported Format Specifiers

- %c → character
- %s → string
- %p → pointer address
- %d → decimal (base 10)
- %i → integer (base 10)
- %u → unsigned decimal
- %x → hexadecimal (lowercase)
- %X → hexadecimal (uppercase)
- %% → percent sign

---

## 👷‍♀️ Compilation

To compile the library, run:

```bash
make
```

This will generate the libftprintf.a static library.

Available Makefile Rules
```bash
make        # Compile the library
make clean  # Remove object files
make fclean # Remove object files and library
make re     # Recompile everything
```
## 📦 Usage

Include the header file in your project:
```bash
#include "ft_printf.h"
```

Compile your program with the library:
```bash
gcc main.c -L. -lftprintf
```

Example:
```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! Number: %d\n", "world", 42);
    return (0);
}
```

## 💡 What I Learned
- Variadic functions (va_start, va_arg, va_end)
- Format parsing and string processing
- Number base conversions
- Memory and buffer management
- Writing clean and modular C code
