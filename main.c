#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Homework 2_2
    int a = 7;
    int b = 0;
    int c;
    printf("a=%d b=%d\n",a,b);
    c = a;
    a = b;
    b = c;
    printf("After Swapping: a=%d b=%d",a,b);

    return 0;
}
