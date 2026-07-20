//1输出helloworld
#include <stdio.h>
int main()
{
    printf("hello");
    return 0;
}         //include   stdio.h     printf后面加；     return 0后面加；


//2输入两个整数的和，并且求和
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


//3两数做加减乘除运算
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

//4输入单个字符并输出
#include <stdio.h>     //include <stdio.h>
int main()
{  //左花括号加回车自动出现右括号
    char ch;    //分号英语直接按
    ch=getchar();   //getchar()函数获取一个字符
    putchar(ch);    //putchar()函数输出一个字符
    return 0;    //return 0; 语句表示程序正常结束
}

//5英尺换算厘米
#include <stdio.h>
int main()
{
    float a,b;
    scanf("%f",&a);   //%f表示浮点数
    b=a*30.48;
    printf("%.2f\n",b);   //%.2f表示保留两位小数    //%5.2f表示总共占5位，小数点后保留两位   //%-5.2f表示总共占5位，小数点后保留两位，左对齐
    return 0;
}

//6温度转换                 //多用上下左右键来回移动光标
#include <stdio.h>
int main()
{
    float a,b;
    scanf("%f",&a);
    b=a*9/5+32;   //注意运算符的优先级，先乘除后加减
    printf("%.2f\n",b);
    return 0;
}

//7交换两个变量的值
 #include <stdio.h>
 int main()
 {
    int a,b,c;
    scanf("%d%d",&a,&b);
    t=a;
    a=b;
    b=t;   //交换两个数的值
    printf("%d%d\n",a,b);
    return 0;
 }

//8不借助第三方变量交换两数
#include <stdio.h>
 int main()
 {
    int a,b;
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d  %d\n",a,b);    //连续输出两数，printf("%d  %d\n",a,b);  //中间加两个空格
    return 0;
 }

 //9输出三位数的各位视为百位
 #include <stdio.h>
 int main()
 {
    scanf("%d",&a);
    b=a/100;
    c=(a/10)%10;
    d=a%10;
    printf("%d %d %d\n",b,c,d);       //除以10减位  除以10的n位数的次方求最大位  取余求末位（先除以10再取余求得是倒数第二位）
    returnn 0;
 }


 #include <stdio.h>
 int main()
 {  
    scanf("%d",&a);
    b=a*a;
    printf("%d\n",b);
 }



 