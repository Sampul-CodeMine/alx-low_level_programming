# C LIBRARIES AND SHARED ARCHIVE FILE

With the help of libraries, C programs are made easily portable.
Making an archive or library couldnbe handy using the commands:

- ```ar``` used to create the library from C object files
- ```ranlib``` used for indexing the archive or library file

This is a readme file on how to make C libraries and archives.
We have Static and Dynamic libraries.

## CREATING STATIC LIBRARY IN C

```gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c"```

- The above code compiles all .c program files and creates the object files

```ar rc lib_util.lib *.o```

- The above code creates a static archive or static library called lib_util.lib (in windows) or lib_util.a (in linux)

```ranlib lib_util.lib```

The above code indexes the archive library file for quicker access

## RUNNING EXECUTABLES FROM STATIC LIBRARIES AND OBJECT files

```bash
gcc main.o -L. lib_util.lib -o exec

# or

gcc -o exec main.o -L. -l_util

```

The above links the archive or static library to the object file for the program creating an executable called exec"


## CREATING DYNAMIC LIBRARY IN C

```gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -c *.c```

- The above code above compiles the program file into object file. The flag -fPIC makes the object file position independent code [PIC] for dynamic linking

```gcc -shared -o lib_dyn.dll *.o```

- The above code creates a dynamic archive or dynamic library called lib_dyn.dll (in windows) or lib_dyn.so (in linux)


## RUNNING EXECUTABLES FROM DYNAMIC LIBRARIES AND OBJECT files

```gcc -o exec_dyn main.o lib_dyn.dll```

- This will create an executable file called lib_dyn.exe for windows or lib_dyn for linux

To be able to use this dynamic library, you have to install the dynamic library using the command

```sudo mv lib_dyn.dll /usr/lib/```

- You have to run this command using administrative rights (sudo)

```sudo ldconfig```


> Ehigboria Dukeson