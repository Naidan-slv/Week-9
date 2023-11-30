#include <stdio.h>

int add_to_add_number(int num){
    return num+10;
}

void add_to_num_by_ref(int* num){
    *num = *num+10;
}
int main()
{
    int number = 500;
    int* num = &number;

    printf("original:%d\n add_to_number():%d\n num = %d\n",number, add_to_add_number(number),number);
    add_to_num_by_ref(num);
    printf("add to num by ref num = %d %d\n",number,*num);

}