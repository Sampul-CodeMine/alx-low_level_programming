# TYPEDEF, STRUCT IN C PROGRAMMING

In this phase of Low level language programming using C pprogramming language, we will be dealing with how to create `struct`, and `typedef`.

In C language `struct` is a great way to group several related variables of different data type all at one place. `typdef` is yet another way used for declaring the type of structure in C language.

A `struct` in the C programming language is a composite data type declaration that defines a physically grouped list of variables under one name in a block of memory, allowing the different variables to be accessed via a single pointer or by the struct declared name which returns the same address. The struct data type can contain other data types so is used for mixed-data-type records such as a hard-drive directory entry (file length, name, extension, physical address, etc.), or other mixed-type records (name, address, telephone, balance, etc.).

The C struct directly references a contiguous block of physical memory, usually delimited (sized) by word-length boundaries. It corresponds to the similarly named feature available in some assemblers for Intel processors. Being a block of contiguous memory, each field within a struct is located at a certain fixed offset from the start.

Because the contents of a struct are stored in contiguous memory, the sizeof operator must be used to get the number of bytes needed to store a particular type of struct, just as it can be used for primitives. The alignment of particular fields in the struct (with respect to word boundaries) is implementation-specific and may include padding, although modern compilers typically support the #pragma pack directive, which changes the size in bytes used for alignment.

**_Syntax:_**

```c
struct MyStructure {   // Structure declaration
     int myNum;           // Member (int variable)
     char myLetter;       // Member (char variable)
}; // End the structure with a semicolon

```

To access the structure, you must create a variable of it.

Use the `struct` keyword inside the `main()` method, followed by the name of the structure and then the name of the structure variable:

```c
struct myStructure {
  int myNum;
  char myLetter;
};

int main() {
  struct myStructure s1;
  return 0;
}

```

## Access Structure Members

To access members of a structure, use the dot syntax (.):

**Example**

```c
// Create a structure called myStructure
struct myStructure {
  int myNum;
  char myLetter;
};

int main() {
  // Create a structure variable of myStructure called s1
  struct myStructure s1;

  // Assign values to members of s1
  s1.myNum = 13;
  s1.myLetter = 'B';

  // Print values
  printf("My number: %d\n", s1.myNum);
  printf("My letter: %c\n", s1.myLetter);

  return 0;
}
```

## What About Strings in Structures?

Remember that strings in C are actually an array of characters, and unfortunately, you can't assign a value to an array like this:

**Example**

```c
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];  // String
};

int main() {
  struct myStructure s1;

  // Trying to assign a value to the string
  s1.myString = "Some text";

  // Trying to print the value
  printf("My string: %s", s1.myString);

  return 0;
}
```

_An error will occur_

However, there is a solution for this! You can use the strcpy() function and assign the value to s1.myString, like this:

**Example**

```c
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30]; // String
};

int main() {
  struct myStructure s1;

  // Assign a value to the string using the strcpy function
  strcpy(s1.myString, "Some text");

  // Print the value
  printf("My string: %s", s1.myString);

  return 0;
}
```

## `typedef`

The C language contains the `typedef` keyword to allow users to provide alternative names for the primitive (e.g.,​ `int`) and user-defined​ (e.g `struct`) data types.

Remember, this keyword adds a new name for some existing data type but does not create a new type.

Using `typedef struct` results in a cleaner, more readable code, and saves the programmer keystrokes​. However, it also leads to a more cluttered global namespace which can be problematic for large programs.

### Variable Declaration without `typedef`
```c
# include<stdio.h>

struct Point{
  int x;
  int y;
};
int main() {
    struct Point p1;
    p1.x = 1;
    p1.y = 3;
    printf("%d \n", p1.x);
    printf("%d \n", p1.y);
    return 0;
}
```

### Using the `typedef` Keyword

Note that there is no longer a need to type struct again and again with every declaration of the variable of this type.

```c
#include<stdio.h>

struct Point{
  int x;
  int y;
};
typedef struct Point Point;
int main() {
    Point p1;
    p1.x = 1;
    p1.y = 3;
    printf("%d \n", p1.x);
    printf("%d \n", p1.y);
    return 0;
}
```

_or_

```c
#include<stdio.h>

typedef struct Point{
  int x;
  int y;
} Point;
int main() {
    Point p1;
    p1.x = 1;
    p1.y = 3;
    printf("%d \n", p1.x);
    printf("%d \n", p1.y);
    return 0;
}
```
