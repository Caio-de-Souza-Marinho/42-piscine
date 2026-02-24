# 42 Piscine

*This project has been created as part of the 42 curriculum by caide-so.*

## Description

The **42 Piscine** is an intensive 4-week bootcamp that serves as the selection process for 42 School. It's a full immersion into C programming, Unix systems, and problem-solving under pressure. This repository contains all my solutions and exercises completed during the Piscine in July-August 2024.

The Piscine tests not only technical skills but also your ability to learn independently, collaborate with peers, and persevere through challenges. It's designed to simulate the learning methodology used throughout the 42 curriculum: peer-to-peer learning, no teachers, and learning by doing.

---

## Repository Structure

```
piscine/
├── shell_00/          # Shell basics
├── shell_01/          # Shell scripting
├── c_00/ - c_09/      # C programming modules
├── euaceito/          # 42 SP acceptance agreement
└── practice_exam/     # Exam practice exercises
```

---

## Modules Overview

### Shell Modules

#### **Shell 00** - Introduction to Unix/Shell
Basic Unix commands and file system manipulation.

**Topics covered:**
- File creation and permissions
- Tar archives
- SSH keys
- Basic shell commands (`ls`, `find`, etc.)

**Key exercises:**
- `ex00`: Creating files with specific content
- `ex01`: File permissions and ownership
- `ex02`: Complex permission structures with tar
- `ex03`: SSH public key management
- `ex04`: Advanced `ls` command usage
- `ex05`: Git commit history parsing

---

#### **Shell 01** - Shell Scripting
Introduction to bash scripting and text processing.

**Topics covered:**
- Bash scripting fundamentals
- Text manipulation (`sed`, `awk`, `tr`)
- Regular expressions
- Process and user management commands

**Key exercises:**
- `ex01`: User groups extraction
- `ex02`: Finding shell scripts
- `ex03`: Counting files and directories
- `ex04`: MAC address extraction
- `ex06`: Filtering alternate lines
- `ex07`: Advanced text processing with pipes

---

### C Programming Modules

#### **C 00** - Introduction to C
Your first steps in C programming.

**Topics covered:**
- Basic I/O with `write()`
- Character and number printing
- Loops and conditions
- ASCII manipulation

**Functions implemented:**
- `ft_putchar` - Print a character
- `ft_print_alphabet` - Print alphabet
- `ft_print_numbers` - Print digits 0-9
- `ft_is_negative` - Check if number is negative
- `ft_print_comb` - Print combinations
- `ft_putnbr` - Print integers

---

#### **C 01** - Pointers
Understanding memory addresses and pointer manipulation.

**Topics covered:**
- Pointer basics
- Memory addressing
- Pointer arithmetic
- Pass-by-reference

**Functions implemented:**
- `ft_ft` - Assign value via pointer
- `ft_ultimate_ft` - 9-level pointer dereferencing
- `ft_swap` - Swap two integers using pointers
- `ft_div_mod` - Division and modulo via pointers
- `ft_putstr` - Print string using pointers
- `ft_strlen` - Calculate string length
- `ft_rev_int_tab` - Reverse array
- `ft_sort_int_tab` - Bubble sort implementation

---

#### **C 02** - Strings (Part 1)
String manipulation fundamentals.

**Topics covered:**
- String copying
- Character validation
- Case conversion
- String transformations

**Functions implemented:**
- `ft_strcpy` / `ft_strncpy` - Copy strings
- `ft_str_is_alpha` / `_numeric` / `_lowercase` / `_uppercase` / `_printable` - Character validation
- `ft_strupcase` / `ft_strlowcase` - Case conversion
- `ft_strcapitalize` - Capitalize words
- `ft_strlcpy` - Safe string copy
- `ft_putstr_non_printable` - Display non-printable chars in hex
- `ft_print_memory` - Memory dump in hex format

---

#### **C 03** - Strings (Part 2)
Advanced string operations and comparisons.

**Topics covered:**
- String comparison
- String concatenation
- Substring search
- Safe concatenation

**Functions implemented:**
- `ft_strcmp` / `ft_strncmp` - Compare strings
- `ft_strcat` / `ft_strncat` - Concatenate strings
- `ft_strstr` - Find substring
- `ft_strlcat` - Safe concatenation with size limit

---

#### **C 04** - String Conversions
Converting between strings and numbers.

**Topics covered:**
- ASCII to integer conversion
- Integer to string conversion
- Base conversions
- Numeric output

**Functions implemented:**
- `ft_strlen` - String length
- `ft_putstr` - Print string
- `ft_putnbr` - Print integer
- `ft_atoi` - String to integer
- `ft_putnbr_base` - Print number in any base
- `ft_atoi_base` - Convert string in any base to integer

---

#### **C 05** - Recursion
Solving problems using recursive approaches.

**Topics covered:**
- Recursion fundamentals
- Mathematical recursion
- Fibonacci sequence
- Prime numbers

**Functions implemented:**
- `ft_iterative_factorial` / `ft_recursive_factorial` - Factorial calculation
- `ft_iterative_power` / `ft_recursive_power` - Power calculation
- `ft_fibonacci` - Fibonacci sequence
- `ft_sqrt` - Square root calculation
- `ft_is_prime` - Prime number check
- `ft_find_next_prime` - Find next prime number

---

#### **C 06** - Command Line Arguments
Working with `argc` and `argv`.

**Topics covered:**
- Program arguments
- Argument parsing
- Argument manipulation
- Sorting arguments

**Programs implemented:**
- `ft_print_program_name` - Print program name
- `ft_print_params` - Print all arguments
- `ft_rev_params` - Print arguments in reverse
- `ft_sort_params` - Sort and print arguments

---

#### **C 07** - Dynamic Memory Allocation
Introduction to `malloc` and dynamic memory.

**Topics covered:**
- Memory allocation with `malloc`
- Dynamic arrays
- Memory management
- String duplication

**Functions implemented:**
- `ft_strdup` - Duplicate string
- `ft_range` - Create integer array
- `ft_ultimate_range` - Create array with pointer
- `ft_strjoin` - Join strings with separator

---

#### **C 08** - Structures and Macros
Introduction to preprocessor and data structures.

**Topics covered:**
- Header files
- Preprocessor directives
- Macros
- Structures (structs)

**Files created:**
- `ft.h` - Basic function prototypes
- `ft_boolean.h` - Boolean type and macros
- `ft_abs.h` - Absolute value macro
- `ft_point.h` - Point structure
- `ft_strs_to_tab` / `ft_show_tab` - Structure array manipulation

---

#### **C 09** - Makefiles and Libraries
Building and managing static libraries.

**Topics covered:**
- Static libraries
- `ar` command
- Makefile creation
- Compilation flags

**Deliverables:**
- `libft.a` - Static library
- `libft_creator.sh` - Library creation script
- Makefile - Automated compilation

---

### Practice Exams

Contains solutions for practice exam exercises organized by difficulty level (0-2).

**Level 0** - Basic I/O and simple algorithms
**Level 1** - String manipulation and basic algorithms  
**Level 2** - More complex problems with memory management

---

## Compilation

Most C exercises can be compiled with:

```bash
gcc -Wall -Wextra -Werror -o program file.c
```

For modules with multiple files:

```bash
gcc -Wall -Wextra -Werror -o program *.c
```

---

## Learning Outcomes

Through the Piscine, I developed:

- **C Programming Fundamentals**: Variables, operators, control flow, functions
- **Memory Management**: Pointers, arrays, dynamic allocation
- **Problem Solving**: Breaking down complex problems into smaller steps
- **Unix/Shell Skills**: Navigation, scripting, text processing
- **Debugging**: Using GDB, understanding segmentation faults, memory leaks
- **Time Management**: Delivering projects under tight deadlines
- **Peer Learning**: Collaborating with other students to solve problems
- **Resilience**: Persevering through challenging exercises and evaluation pressure

---

## Evaluation

Each C module was peer-evaluated using the 42 evaluation system:
- **Moulinette** (automated tests) for functional correctness
- **Peer evaluation** (3 evaluations per project) for code quality and understanding
- Projects must score ≥80% to pass

---

## Author

**caide-so** — caide-so@student.42sp.org.br  
42 São Paulo - Piscine July/August 2024
