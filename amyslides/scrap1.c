#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("An int is size : %ld\n", sizeof(int));
    // sizeof() returns a long double so we need to use a different holder ?
    printf("A double is size : %ld\n", sizeof(double));

    printf("A Character is size : %ld\n", sizeof(char));

    char* name = "Jonathon";
    printf("The word %s is size: %ld\n",name,sizeof(name));


    char* name = "Jonathon";
    printf("The word %s is size: %ld\n",name,sizeof(name));

}

// sizeof is not the same as length. It will not tell you how many things are inside it 