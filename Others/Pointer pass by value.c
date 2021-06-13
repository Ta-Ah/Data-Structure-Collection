#include<stdio.h>

void change(int x) //this x is different from main function x
{
    x = 20;
    printf("\nInside change function %d\n", x);
}

int main()
{
    int x = 10;
    printf("\nInside main function %d\n", x);

    change (x); // i am passing 10 the value not x
    printf("\nInside main function %d\n", x);
}
