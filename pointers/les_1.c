#include <stdlib.h>
#include <stdio.h>


void minMax(int arr[], int len, int *min , int*max)
{
    *min = *max = arr[0];
    int i;
    for(i = 1; i<len; i++)
    {
        if(arr[i] > *max)
        *max = arr[i];
        if(arr[i] < *min)
        *min = arr[i];
    }
}

int main ()
{
    int a[] = {1,2,3,4,44,4,6,7,8,9,9,7,4,4,5,6,66,7,1234,342,343};
    int min,max;
    int len =  sizeof(a)/sizeof(a[0]);
    minMax(a,len,&min,&max);
    printf("Minimum Value in the array is: %d and Maxiimum value is :%d\n",min,max);

}