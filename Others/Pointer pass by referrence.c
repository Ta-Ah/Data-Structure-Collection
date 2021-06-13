#include<stdio.h>

void change(int *q)
{
    *q = 20;
    printf("Inside change function %d\n", *q);
}
int main()
{
    int x = 10;
    printf("Inside main function %d\n", x);

    //int *p = &x;
    change(&x); // passing location
    printf("Inside main function %d\n", x);
}
