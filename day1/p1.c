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