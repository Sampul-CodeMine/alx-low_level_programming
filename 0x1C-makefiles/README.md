# 0x1C. C - Makefiles

## Learning Objectives

### General

- What are make, Makefiles
- When, why and how to use Makefiles
- What are rules and how to set and use them
- What are explicit and implicit rules
- What are the most common / useful rules
- What are variables and how to set and use them

## Requirements

### General

- Allowed editors: `vi`, `vim`, `emacs`
- OS: `Ubuntu 20.04 LTS`
- `Version of gcc: 9.3.0`
- Version of make: `GNU Make 4.2.1`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory

## What is make?

The `make` program in Linux is used to compile and manage a set of source code applications and files. It allows developers to install and gather a range of apps via the terminal. It also controls and cuts down on the amount of time necessary for compilation.

The basic objective of the `make` command is to break down a large program into smaller chunks and determine if it needs to be recompiled. It also has all of the necessary instructions for recompiling them.

## How to Install make on a Linux PC.

```bash
nerdie@PC $ sudo apt update && sudo apt upgrade -y

nerdie@PC $ sudo apt install make
```

This will install the make package on Linux. To check the version,

```bash
nerdie@PC $ make --Version
GNU Make 4.3
Built for X86_64-pc-linux-gnu
...
There is NO WARRANTY, to the extent permitted by law.
```

## How to Install make on a Microsoft Windows PC.

We will be using choco package to install this on Windows although there are different ways to.

- First, check if the choco package is installed on your PC. If you do not have it then visit [here](https://community.chocolatey.org/courses/installation/installing?method=installing-chocolatey)  on how to install choco on your Windows PC.

```bash
C:\Users\nerdie> choco
Chocolatey v1.4.0
Please run 'choco -?' or 'choco <command> -?' for help menu.
```

If you have the above result, then proceed to the next level of installing make.

```bash
C:\Users\nerdie> choco install make
Chocolatey v1.4.0
Installing the following packages:
make
By installing, you accept licenses for the packages.
Progress: Downloading make 4.4.1... 100%

make v4.4.1 [Approved]
make package files install completed. Performing other installation steps.
 ShimGen has successfully created a shim for make.exe
 The install of make was successful.
  Software installed to 'C:\ProgramData\chocolatey\lib\make'

Chocolatey installed 1/1 packages.
 See the log for details (C:\ProgramData\chocolatey\logs\chocolatey.log).
```

This will install the make package on Linux. To check the version,

```bash
C:\Users\nerdie> make --Version
GNU Make 4.4.1
Built for Windows32
Copyright (C) 1988-2023 Free Software Foundation, Inc.
...
There is NO WARRANTY, to the extent permitted by law.
```

## Makefiles

For `make` package to be able to compile and link programs, a `makefile` file is required. When `make` recompiles the editor, each changed C source file must be recompiled. If a header file has changed, each C source file that includes the header file must be recompiled to be safe. Each compilation produces an object file corresponding to the source file. Finally, if any source file has been recompiled, all the object files, whether newly made or saved from previous compilations, must be linked together to produce the new executable editor.

- `make` reads the instruction from `makefile` (called the descriptor file) by default.
- `Makefile` sets a set of rules to determine which parts of a program need to be recompile, and issues command to recompile them.
- `Makefile` is a way of automating software building procedure and other complex tasks with dependencies.
- `Makefile` contains: _**dependency rules**_, _**macros**_ and _**suffix**_ (or implicit) rules.

## Simple Implementation using `make` package and `makefile` file

Having this file structure:

```bash
nerdie@PC $ ls
accept_value.c  add.c  divide.c  main.c  main.h  makefile  multiply.c  subtract.c 
```

Our files for this little demonstration would be listed below:

```c
/* main.h */

#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int add(int, int);
int subtract(int, int);
int multiply(int, int);
float divide(int, int);
int accept_value(char *);

#endif /* MAIN_H */


/* accept_value.c */

#include "main.h"

/**
 * accept_value - function to accept value from user 
 * @prompt: string label to indicate whats needed
 * Return: int value of what was entered
 */
int accept_value(char *prompt)
{
	int data = 0;

	printf("Enter %s:\t", prompt);
	if (scanf("%d", &data) == 1)
		return (data);
	return (1);
}


/* add.c */

#include "main.h"
/**
 * add - function to add two numbers together
 * @fnum: first number 
 * @snum: second number
 * Return: int value of the sum of fnum and snum
 */
int add(int fnum, int snum)
{
	return (fnum + snum);
}


/* divide.c */

#include "main.h"
/**
 * divide - function to divide a number by another number
 * @fnum: first number 
 * @snum: second number
 * Return: float value of the division of fnum by snum
 */
float divide(int fnum, int snum)
{
	return (fnum / snum);
}


/* multiply.c */

#include "main.h"
/**
 * multiply - function to find the products of two numbers
 * @fnum: first number 
 * @snum: second number
 * Return: int value of the product of fnum and snum
 */
int multiply(int fnum, int snum)
{
	return (fnum * snum);
}


/* subtract.c */

#include "main.h"
/**
 * subtract - function to subtract two numbers
 * @fnum: first number 
 * @snum: second number
 * Return: int value of the difference between fnum and snum
 */
int subtract(int fnum, int snum)
{
	return (fnum - snum);
}


/* main.c */

#include "main.h"
/**
 * main - Program Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fnum = 0, snum = 0;
	int choice;

	fnum = accept_value("First Number");
	snum = accept_value("Second Number");
	printf("\n[1] - Addition\n[1] - Subtract\n[3]"
			"- Multiply\n[4] - Divide\n");
	if (scanf("%d", &choice) == 1)
	{
		if (choice == 1)
			printf("%d + %d = %d", fnum, snum, add(fnum, snum));
		else if (choice == 2)
			printf("%d - %d = %d", fnum, snum, subtract(fnum, snum));
		else if (choice == 3)
			printf("%d * %d = %d", fnum, snum, multiply(fnum, snum));
		else if (choice == 4)
		{
			if (snum == 0)
			{
				printf("You cannot divide %d by 0.", fnum);
				return (1);
			}
			printf("%d / %d = %.2f", fnum, snum, divide(fnum, snum));
		}
		else
			printf("You did not make a right choice.\n");
	}
	return (0);
}

```

The normal process to have compiled this file using a gcc command from a terminal would be:

```bash
nerdie@PC $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c divide.c multiply.c add.c subtract.c accept_value.c -c

nerdie@PC $ ls *.o
accept_value.o   add.o   divide.o   main.o  multiply.o   subtract.o

nerdie@PC $ gcc -o maths *.o

nerdie@PC $
```

This shows that there is no error.

Executing would be:

```bash

# For addition

nerdie@PC $ ./maths
Enter First Number:     12
Enter Second Number:    12

[1] - Addition
[1] - Subtract
[3]- Multiply
[4] - Divide
1
12 + 12 = 24

nerdie@PC $

# For Subtraction

nerdie@PC $ ./maths
Enter First Number:     12
Enter Second Number:    6

[1] - Addition
[1] - Subtract
[3]- Multiply
[4] - Divide
2
12 - 6 = 6

nerdie@PC $ 

# For Multiplication

nerdie@PC $ ./maths
Enter First Number:     12
Enter Second Number:    3

[1] - Addition
[1] - Subtract
[3]- Multiply
[4] - Divide
3
12 * 3 = 36

nerdie@PC $ 

# For Division

nerdie@PC $ ./maths
Enter First Number:     12
Enter Second Number:    12

[1] - Addition
[1] - Subtract
[3]- Multiply
[4] - Divide
4
12 / 12 = 1.00

nerdie@PC $ 

# For Division

nerdie@PC $ ./maths
Enter First Number:     12
Enter Second Number:    0

[1] - Addition
[1] - Subtract
[3]- Multiply
[4] - Divide
4
You cannot divide 12 by 0.

nerdie@PC $ 
```

We will be creating a simple makefile which will be the descriptor file from which make will compile and execute our program files.

> _**Note:** your makefile has no extension._

```c
# makefile

# Specify the Compiler
CC=gcc

# Specifying the flags to be used.
CFLAGS=-Wall -Werror -Wextra -pedantic -std=gnu89 -c

all:maths

maths: main.o accept_value.o add.o divide.o multiply.o subtract.o
	$(CC) main.o accept_value.o add.o divide.o multiply.o subtract.o -o maths

main.o:main.c main.h
	$(CC) $(CFLAGS) main.c

accept_value.o:accept_value.c main.h
	$(CC) $(CFLAGS) accept_value.c

add.o:add.c main.h
	$(CC) $(CFLAGS) add.c

divide.o:divide.c main.h
	$(CC) $(CFLAGS) divide.c

multiply.o:multiply.c main.h
	$(CC) $(CFLAGS) multiply.c

subtract.o:subtract.c main.h
	$(CC) $(CFLAGS) subtract.c

clean:
	rm -rf *.o maths
```

To Compile you program using using the `make` command,

```bash
nerdie@PC $ make
```

This will look for the file `makefile` and use the description to compile your program source codes

```bash
nerdie@PC $ make
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c main.c
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c accept_value.c
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c add.c
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c divide.c
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c multiply.c
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c subtract.c
gcc main.o accept_value.o add.o divide.o multiply.o subtract.o -o maths
```

```bash
nerdie@PC $ ls *.o
accept_value.o   add.o   divide.o   main.o  multiply.o   subtract.o

nerdie@PC $ gcc -o maths *.o

nerdie@PC $
```

Executing would be:

```bash

# For addition

nerdie@PC $ ./maths
Enter First Number:     24
Enter Second Number:    4

[1] - Addition
[1] - Subtract
[3]- Multiply
[4] - Divide
1
24 + 4 = 28

nerdie@PC $
```

Cleaning your directory and getting rid of the executable and the source-code archives __(.o)__ files, just do this:

```bash
nerdie@PC $ make clean
rm -rf *.o maths

nerdie@PC $
```

---

> Ehigboria Dukeson