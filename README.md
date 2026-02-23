# ft_printf

## Overview

ft_printf is a custom implementation of the standard C `printf` function. The objective of this project is to understand variadic functions, formatted output handling, and low‑level data representation by recreating printf behavior from scratch.

This library is designed to be reusable in future C projects where formatted output is required without relying on the original libc implementation.

---

## Supported Conversions

Mandatory conversions implemented:

* %c → character
* %s → string
* %p → pointer address in hexadecimal
* %d → decimal (base 10) integer
* %i → integer in base 10
* %u → unsigned decimal integer
* %x → hexadecimal (lowercase)
* %X → hexadecimal (uppercase)
* %% → percent symbol

> Bonus flags are NOT implemented in this repository.

---

## Project Structure

```
ft_printf/
│── includes/
│   └── ft_printf.h
│
│── src/
│   ├── ft_printf.c
│   ├── handlers/
│   ├── utils/
│
│── Makefile
│── README.md
```

---

## Compilation

To compile the library:

```bash
make
```

This will generate:

```
libftprintf.a
```

### Available Makefile Rules

```bash
make        # compile mandatory part
make clean  # remove object files
make fclean # remove object files and library
make re     # rebuild everything
```

---

## Usage

Include the header in your project:

```c
#include "ft_printf.h"
```

Compile your program with the library:

```bash
gcc main.c -L. -lftprintf -o program
```

---

## What I Learned

Through this project I practiced:

* Variadic functions (`va_list`, `va_start`, `va_arg`, `va_end`)
* Format parsing
* Base conversions (decimal & hexadecimal)
* Memory safety and error handling
* Writing modular and maintainable C code

---

## Testing

Example test:

```bash
gcc test.c libftprintf.a -o test && ./test
```

---

## Author

**Aitor Alonso Jusdado**

Student of Microcomputer Systems and Networks
Aspiring Multiplatform Application Developer

---

## License

This project is for educational purposes.
