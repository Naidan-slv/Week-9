#include <stdlib.h>
#include <stdio.h>

int main ()
{
    int ** array_2d;
    int num_of_rows = 10;
    int num_of_cols = 100;

    array_2d = malloc(num_of_rows * sizeof(int*));
    for (int i =0; i< num_of_rows; i++)
    {
        array_2d[i] = malloc(num_of_cols*sizeof(int));
    }
}

// we simply need to loose a star as we go down each array. If we where to be doing a 3d array it would be the same thing 
// except now we would be adding another for loop and therefore loosing another star as we go down.