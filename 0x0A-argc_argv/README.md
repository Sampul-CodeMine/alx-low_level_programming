# C ```argc``` AND ```argv[]``` PARAMETERS

In this phase of our Low level language programming using C programming language, we will be learning what

```int main(int argc, char *argv[])```  

really mean in C programming language.

When developing a software which you intend to be used by other programs or software, you need to provide an interface through which your program can receive inputs from the calling program, your software executes and returns an output to the calling program. With the help of the ```int argc``` and ```char *argv[]``` parameters, this can be made possible.

- ```int argc```: this holds information of the number of arguments passed to the program from the command line. When no parameter is passed along side the program name, it counts as 1 and returns just the program name.
- ```char *argv[]``` is a pointer to an array of arguments or parameters passed to the commandline during execution of a program.

More will be said in details.

> Dukeson Ehigboria
