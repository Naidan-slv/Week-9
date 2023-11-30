#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    char* address = malloc(200* sizeof(char));

    int* data = malloc(70*sizeof(int));
    // now i have data [100]
    // dont have to do anything fancy to get data out of it

    int count;
    printf("Enter the number of values: ");
    scanf("%d", &count);

    double* samples = malloc(count * sizeof(double));
    if(!samples){
        printf("uh oh .. ");
    }

}