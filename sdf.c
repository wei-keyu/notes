#include <stdio.h>
int main()
{
    printf("hello");
    return 0;
}         //include   stdio.h     printf后面加；     return 0后面加；

#include <stdio.h>
int main()
{
    int a,b,sum;
    scanf(%d%d,a,b)   //scanf后面加括号  %d前后加引号  a,b前面加&符号  句尾加分号 ；
    scanf("%d%d",&a,&b);
    sum=a+b;  //也要加分号；
    printf("sum=%d",sum);      //和python字符串打印规则差不多
    return 0;
}   //结束以花括号结束

#include <stdio.h>    //英语状态下同时按shift
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("加=%d\n",a + b);   //加号前后加空格  \n换行符
    printf("减=%d\n",a - b);
    printf("cheng=%d\n",a * b);
    printf("chu=%d\n",a / b);    //%d要经常用，他只是占位符，需要（计算）一个数时就用%d

}


