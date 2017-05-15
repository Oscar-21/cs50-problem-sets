# Installation

### With GCC compiler
```
// create object files
gcc -std=c11 -c cs50.c
gcc -std=c11 -c water.c
gcc -std=c11 -c final_greedy.c

// Link object files together to create executable
gcc water.o cs50.o
or
gcc final_greedy.o cs50.o

// Run program
./a.out
```
