#include <stdio.h>

int main()
{
    // int var is a normal inter it holds a number in this case 10
    int var = 10;
    // int* var_address is a pointer which specifically points to an interger
    // We are telling it to point at the location where var is stored
    int* var_address = &var;

    printf("The content of \"var\" = %d\n",var);
    printf("The content of \"var_address\" = %p\n",var_address);
    printf("Now the magic! Content of  \"*var_address\" = %d\n",*var_address);
   
   // why do we use the slash when quoting the var
}
// 