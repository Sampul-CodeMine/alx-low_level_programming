# PREPROCESSOR

In this phase of low level language using C programming language, we will be studying preprocessors.

We shall be covering the following:

- What are pre-processors?
- What are macros and how to use them
- How to include guard your header files.

Before going to preprocessors, we have to learn or know our source codes are compiled into object codes / executable files.

The C compiler  has 4 stages of compilation, viz:

- Preprocessing
- Compiling
- Assembling
- Linking

**Preprocessing** stage in C program compilation is done with the pre-processor tool. It is where the compiler removes all comments, macros are replac with the original code. It also replaces the include directives '#" by including the codes in the included header files and place them in the spot where the position wherethey are included.

1. Comments Removal
1. Macros Expansion
1. File inclusion
1. Conditional Compilation

**Compiling** phase in C uses an inbuilt compiler software to convert the intermediate `.i` file into an Assembly file `.s` having assembly level instructions (low-level code). To boost the performance of the program compiler translates the intermediate file to make an assembly file.

**Assembling** phase is where the Assembly level code `.s` file is converted into a machine-understandable code (in binary/hexadecimal form) using an assembler. Assembler is a pre-written program that translates assembly code into machine code. It takes basic instructions from an assembly code file and converts them into binary/hexadecimal code specific to the machine type known as the object code.
The file generated has the same name as the assembly file and is known as an object file with an extension of `.obj` in DOS and `.o` in UNIX OS.

**Linking** is a process of including the library files into our program. Library Files are some predefined files that contain the definition of the functions in the machine language and these files have an extension of .lib. Some unknown statements are written in the object `.o`/`.obj` file that our operating system can't understand. You can understand this as a book having some words that you don't know, and you will use a dictionary to find the meaning of those words. Similarly, we use Library Files to give meaning to some unknown statements from our object file. The linking process generates an executable file with an extension of `.exe` in DOS and `.out` in UNIX OS.
