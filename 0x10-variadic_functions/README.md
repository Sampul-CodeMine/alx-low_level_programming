# VARIADIC FUNCTIONS

In this phase of Low Level Programming using C programming language, we will be dealing with Variadic Functions.

Before diving into variadic functions, let us look at the `stdarg.h` header file in C programming language.

## `stdarg.h` Header File

The `stdarg.h` header file allows functions to accept indefinite number of arguments.

You have to include the header file for it to be able to perform variadic functions.

It is included thus:

```c
#include <stdio.h>
#include <stdarg.h>

// some codes

```

## VARIADIC Function Declaration

To declare a variadic function do the following:

```c
#include <stdio.h>
#include <stdarg.h>

data_type function_name(dataype arg1, ...){}

//Example is given thus

int check(int a, double d, ...)
{
        // some codes
}

// You must have one named parameter before the eclipse (...)
// The following below is wrong

int check(...)
{
        // some codes
}
```

The same syntax used for defining the function is also used for writing out its prototype.

```c
//Example

#include <stdio.h>
#include <stdarg.h>

int check(int, double, ...);

int main(void)
{
        // some codes
}

int check(int a, double d, ...)
{
        // some codes
}

```

Outdated version of **POSIX** (**P**ortable **O**perating **S**ystem **Interface**) used `varargs.h` for variadic functions before the standardization of C Programming Language.

## `stdarg.h` TYPES

|`stdarg.h` Types  |Purposes             |
|-------------------|----------------------|
|`va_list`          |You must declare a variable og type `va_list` before you can access its arguments. Example: `va_list ap;`|
|`va_start`         |This is called with 2 parameters/arguments: variable declared with datatype of `va_list` followed by the last named argument before the eclipse `...` Example: `va_start(ap, param_name);` |
|`va_arg`           |This yields the next argument whenever the function is called. First is the variable from the `va_list` followed by the datatype of the next argument passed to the function. Example: `va_arg(ap, int);` |
|`va_end`           |This must be called on the `va_list` variable before the function return. Example: `va_end(ap);` |
|`va_copy`      |This function is used to duplicate the state of a `va_list`. Example: `va_copy(var2, var1);` This copies the present state or value in `var1` into `var2`. |

**Note:** it is not required to read in all the arguments passed to a variadic function.

**Showing Example**
---------------

```c
// This program prints the positive values from a list of args until a negative value is encountered.

#include <stdio.h>
#include <stdarg.h>

void print_all_args(int num, ...)
{
        va_list arp;
        int itr;

        va_start(arp, num);
        for (itr = num; itr >= 0; itr = va_arg(arp, int))
                printf("%d ", itr);
        va_end(arp);
        putchar('\n');
}

int main(void)
{
        print_all_args(5, 6, 7, 10,21, 44, -2, 57, 100);
        return (0);
}
```

Variadic functions add flexibility to solutions/programs.

```c
// Another Example

#include <stdio.h>
#include <stdarg.h>

void print_sum(int count, ...)
{
        va_list arp;
        int itr, sum = 0;

        va_start(arp, count);
        for (itr = 0; itr < count; itr++)
                sum += va_arg(arp, int);
        va_end(arp);
        return (sum);
}

int main(void)
{
        printf("%d\n", print_sum(5, 6, 7, 10,21, 44, -2, 57, 100));
        return (0);
}
```

> Ehigboria Dukeson Oserefuamen.