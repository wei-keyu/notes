#include <stdio.h>
#include <stdlib.h>

int main()
{
    //initialize vars
    char *first;
    char *last;

    //prompt user t input first and last name and ...
    printf("Enter your first name name: ");
    scanf("%ms",&first);
    printf("Enter your last name: ");
    scanf("%ms",&last);

    //printf the welcome message
    printf("Hello %s %s\n",first,last);

    free(first);
    free(last);
}

//scanf的使用
//%ms的作用
//free()函数的作用
//声明指针