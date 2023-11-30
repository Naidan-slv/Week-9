Pointer is a special variable that is capable of storing some address
it points to a memory location where the first byte is stored

int x  = 5; 
int *ptr;

where the base address of x is 1000 and the base address of ptr is 2000;

ptr = &x;

assign address of variable x to this pointer of ptr. After assigning we can point back to x 


THIS CAN ALSO BE WRITTEN AS "int x = 5, *ptr = &x;" 

*VALUE OF OPERATOR *

VALUE OF OPERATOR is an operator that is used to access the value stored at the location pointed by the pointer

"int x = 5, *ptr = &x;" 

assigning the address of the variable x to the ptr variable (This pointer can point to variable x)

printf("%d", *ptr);

OUTPUT = 5

* - Value of operator 
    It says go to the address of the object and take what is soted in the object

We can also change the value of the object pointed by the pointer

int x = 10;
int  *ptr = &x;
*ptr = 4;
// it changes the value of x from 10 into 4

OUTPUT = 4 

*NEVER APPLY THE INDIRECTION OPERATOR TO THE UNINITIALIZED POINTER*
I.E. 
int *ptr;

*ptr = 1

Points to nowhere so it cannot assign the value 1 to an address

Segmentation Fault - Caused by a program trying to read or write an illegal memory location 

q = p is not the same as *q = *p
Points to one location      this one makes them both the same value but they point to two different locations at two different addreses 

