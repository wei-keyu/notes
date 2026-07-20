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

/* 首先在vscode上编译c程序，然后在终端上gcc编译和./运行   或者顶部运行，启动调试，在终端中运行（断点和下一级的使用）
   当运行没问题时就git status  git add <名字> git commit -a提交 git push上传笔记库 */

   //可以用cd <目录名> 进入目录，cd ..进入上一级目录，cd  进入用户目录，pwd查看当前所在的目录,tree查看当前目录下的文件和目录结构
   //可以用ls查看当前目录下的文件和目录，ls -l查看详细信息，ls -a查看隐藏文件，ls -lh查看文件大小，ls -R查看子目录
   //可以用mkdir <目录名> 创建目录，rmdir <目录名> 删除空目录，rm -r <目录名> 删除非空目录，rm <文件名> 删除文件
   //用cp <源文件> <目标文件> 复制文件，cp -r <源目录> <目标目录> 复制目录，mv <源文件> <目标文件> 移动文件，mv <源目录> <目标目录> 移动目录
   //mkdir <目录名> 创建目录，touch <文件名> 创建文件，cat <文件名> 查看文件内容
   //植入git命令库：可以用git init   或者git clone <远程仓库地址>,克隆远程仓库到本地
   //记得ctrl+s保存，ls查看下级目录
   //记得删除gcc编译生成的<name>文件，rm <name>
