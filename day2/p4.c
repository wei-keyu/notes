#include <stdio.h>
int main()
{
    char first[20];
    char last[20];

    printf("Enter your first name: ");
    scanf("%s",first);
    printf("Enter your last name: ");
    scanf("%s",last);

    printf("hello %s %s\n",first,last);
}