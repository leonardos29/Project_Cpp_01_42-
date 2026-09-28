# C++ Module 01 — 42 School

## About
Memory management and advanced pointers in C++98. Covers stack vs heap allocation, references, pointers to member functions, file manipulation, and switch statements.

## Concepts
- Stack vs heap — `new`, `delete`, `delete[]`
- References vs pointers — when to use each
- Pointers to member functions
- File manipulation — `std::ifstream`, `std::ofstream`
- Switch statement and fall-through
- `const` references as return type

## Exercises

### ex00 — BraiiiiiiinnnzzzZ
Zombie class demonstrating stack vs heap allocation. `newZombie` allocates on the heap and returns a pointer. `randomChump` allocates on the stack and is destroyed at end of scope.

### ex01 — Moar brainz!
Allocates an array of N Zombie objects in a single `new[]` call. Demonstrates `delete[]` and array initialization with `setName`.

### ex02 — HI THIS IS BRAIN
Demystifies references — proves that a variable, a pointer to it, and a reference to it all share the same memory address.

### ex03 — Unnecessary violence
Weapon, HumanA and HumanB classes. HumanA holds a Weapon by reference (always armed). HumanB holds a Weapon by pointer (may be unarmed). Both reflect type changes on the original Weapon automatically.

### ex04 — Sed is for losers
Reads a file and writes a new `.replace` file with every occurrence of s1 replaced by s2. Uses `std::ifstream`, `std::ofstream`, `find` and `substr`. `std::string::replace` is forbidden.

### ex05 — Harl 2.0
Harl class with 4 private complaint methods called via an array of pointers to member functions — no if/else chains.

### ex06 — Harl filter *(optional)*
Filters Harl's complaints by level using a switch statement with intentional fall-through, printing the selected level and all above it.

## Compilation
```bash
make        # compile
make clean  # remove objects
make fclean # remove objects and executable
make re     # recompile from scratch
```

## Requirements
- Compiler: `c++`
- Flags: `-Wall -Wextra -Werror -std=c++98`
- No STL containers or algorithms
- No `printf`, `alloc`, or `free`
- No `using namespace`
