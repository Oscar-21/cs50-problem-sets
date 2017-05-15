#Installation

##With GCC compiler
```
// create object file for harvard's cs50 library
**gcc -std=c11 -c cs50.c**

// create object file for pyramid.h
// this code stores the function that actually
// builds the half pyramid. It is included
// by use of a header file for increased modularity/readibility
**gcc -std=c11 -c pyramid.c**

//create object file for the the marioWk1.c
**gcc -std=c11 -c marioWk1.c**

// Link all object files together to create executable
gcc marioWk1.o cs50.o pyramid.o

// Run program
**./a.out**
```
