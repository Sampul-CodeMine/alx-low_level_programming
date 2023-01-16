#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;
    struct dog ny_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);

    ny_dog.name = "Popy";
    ny_dog.age = 3.5;
    print_dog(&ny_dog);
    return (0);
}
