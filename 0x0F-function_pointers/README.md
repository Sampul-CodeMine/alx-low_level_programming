# FUCTION POINTERS IN C PROGRAMMING

In this phase of Low Level Programming using C programming language, we will be dealing with function pointers.

### **1:**

In C programming language, normal/data pointers are declared as thus

`int *`, `char *`, `double *` etc.

Function pointers are declared thus:

```c
//This is a simple function
void fun(int a)
{ ... }

int main()
{
        //declaring a function pointer 
        void (*func_ptr)(int) = &fun;

        // invoking a function pointer
        (*func_ptr)(10);
}
```

### **2:**

Data pointers points to data but the function pointers points to code. It stores the start of an executable code.

### **3:**

Unlike data pointers, where you can allocate and deallocate memory, you cannot allocate/deallocate memory using function pointers.

### **4,**

Function names can be used to get the address of a function.

```c
//This is a simple function
void fun(int a)
{ ... }

int main()
{
        //declaring a function pointer 
        void (*func_ptr)(int) = fun;

        // invoking a function pointer
        func_ptr(10);
}
```

### **5:**

We can have array of function pointers, thereby allowing function pointers to as well be used in place of switch statements.

```c
#include <stdio.h>

//This is a simple function
void add(int a, int b)
{
        printf("The sum of %d and %d = %d", a, b, (a + b));
}

void subtract(int a, int b)
{
        printf("The difference between %d and %d = %d", a, b, (a - b));
}

void multiply(int a, int b)
{
        printf("The product of %d and %d = %d", a, b, (a * b));
}

int main()
{
        //declaring a function pointer 
        void (*func_ptr[])(int, int) = {add, subtract, multiply};
        unsigned int chr, a = 15, b= 10;

        printf("Enter Choice: 0 - Add\t1 - Subtract\t2 - Multiply:\t");
        scanf("%d", &chr);

        if (chr > 2)
                return (0);

        (*func_ptr[chr])(a, b);

        return (0);
}
```

### **6:**

Function pointers can be passed as an argument and can also be returned from a function.
