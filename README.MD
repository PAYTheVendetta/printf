# ft_printf

Recreation of the C standard library `printf` function, built from scratch as part of the 42 Madrid curriculum.

The goal was to understand variadic functions, format string parsing, and low-level data representation without relying on the original libc implementation.

---

## Project Structure

```
printf/
├── ft_printf.c   # Main function and format parser
├── ft_printf.h   # Header file
├── utils.c       # Helper functions
└── Makefile
```

---

## Supported Conversions

| Specifier | Description |
|---|---|
| `%c` | Single character |
| `%s` | String |
| `%p` | Pointer address in hexadecimal |
| `%d` | Decimal integer |
| `%i` | Integer |
| `%u` | Unsigned decimal integer |
| `%x` | Hexadecimal (lowercase) |
| `%X` | Hexadecimal (uppercase) |
| `%%` | Literal percent sign |

---

## Usage

### Compilation

```bash
make        # compile
make clean  # remove object files
make fclean # remove object files and library
make re     # full rebuild
```

### Using in your project

```c
#include "ft_printf.h"
```

```bash
gcc main.c -L. -lftprintf -o program
```

### Example

```c
ft_printf("Hello, %s! Number: %d\n", "world", 42);
ft_printf("Pointer: %p | Hex: %x\n", ptr, 255);
```

---

## What I Learned

- Variadic functions — `va_list`, `va_start`, `va_arg`, `va_end`
- Format string parsing
- Base conversion (decimal, hexadecimal)
- Writing modular and reusable C code

---

## Author

**Aitor Alonso Jusdado** — [42 Madrid](https://www.42madrid.com/) — [LinkedIn](https://www.linkedin.com/in/aitor-alonso-jusdado-0ba015153)