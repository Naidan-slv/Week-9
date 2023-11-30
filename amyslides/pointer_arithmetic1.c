#include <stdio.h>

int main()
{
    int vector[5] = {11,13,17, 23 , 31};

    int* address = vector;

    printf ( "\nAddress[0] = %d\n", *address);

    printf ( "\nAddress[1] = %d\n", *(address+1));

    printf ("\n Address[2] = %d\n", *(address+2));
// We can use plus one and plus 2 etc to tell c to go to this array and find me the  (0 +xth)value 
// the *operator here is dereferening the pointer (Printing its value)
    

}