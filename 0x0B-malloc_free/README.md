# AUTOMATIC AND DYNAMIC ALLOCATION OF MEMORY USING `malloc, realloc, calloc and free` KEYWORDS

The `malloc` function is used to allocate a certain amount of memory during the execution of a program. It will request a block of memory from the heap. If the request is granted, the operating system will reserve the requested amount of memory and `malloc` will return a pointer to the reserved space.

The `malloc` function allocates a specific number of bytes in memory and returns a pointer to the allocated memory. This memory will have read and write permissions.

```c
Prototype: void *malloc(size_t size);
where void * means it is a pointer to the type of your choice
and size is the number of bytes your need to allocate
```

Just like with automatic allocation, the memory allocated by malloc is not initialized.

__Free:__
When you are using malloc, you have to handle the memory yourself. This means that:

* You need to keep track of all the addresses of the allocated memory (in a variable of type pointer)
* You have to deallocate every memory space you previously allocated yourself. If you do not do this, then your program can run out of memory. Your operating system could even kill your program while it is running

The `free` function frees the memory space which have been allocated by a previous call to malloc (or calloc, or realloc).

```c
Prototype: void free(void *ptr);
where ptr is the address of the memory space previously allocated by and returned by a call to malloc
```

__Valgrind:__
When writing big and complex programs, it is not always easy to keep track of all allocated and deallocated memory. We can use the program Valgrind in order to ensure we are freeing all allocated memory. It is a programming tool for memory debugging, memory leak detection, and profiling.
