/* #include <stdio.h>
int main()
{
    int a = 5;
    float b = 3.14;
    char c = "hello world";

    printf("%d is an integer\n",a);
    printf("%f is a float\n",b);
    print("%s is a char\n",c);
}    */

/*   char类型是单个字符，应该用单引号表示，例如：char c = 'h'
     如果要表示字符串，应该使用char数组，或者char *c 例如：char c[] = "hello world"   */

//正确的输出函数是printf
//%s对应的是字符串，%c对应的是单个字符，%d对应的是整数，%f对应的是浮点数
//不要忘记换行符\n   和  分号；
//声明与函数之间可以有空行，函数之间也可以有空行

#include <stdio.h>
int main()
{
    int a = 5;
    float b = 3.14;
    char c[] = "hello world";

    printf("%d is an integer\n",a);
    printf("%f is a float\n",b);
    printf("%s is a char\n",c);
}
