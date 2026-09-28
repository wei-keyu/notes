//ls  cd mkdir touch

//结构体定义
struct tag{
    int a;
    char b;
    float c;
};

//结构体变量定义
struct tag t1;

//typedef对匿名结构体类型重命名
typedef struct listnode{
    int a;
    char b;
    float c;
    struct listnode *next;      //结构体中可以嵌套结构体指针
}Node;

//结构体传参：
struct s{
    int data[100];
    int num;
};

struct s s1 = {{1,2,3,4,5},1000};
void print1(struct s s1)
{
    printf("%d\n",s1.num);
}                                    //结构体传参

void print2(struct s *p)
{
    printf("%d\n",p->num);           //->是结构体指针访问成员的运算符
}                                    //结构体指针传参


//数据结构：
//顺序表定义：
#include <stdio.h>

#define MAXSIZE 100
typedef struct{
    int data[MAXSIZE];
    int length;        //顺序表 = 用“数组”作为底层存储，再额外增加一个 length 来管理“当前有几个有效元素”
}sqlist;

int main()             //定义结构体可以在main函数外，但是结构体变量的定义必须在main函数内
{
sqlist L;
L.length = 0;         //创建一个空顺序表

//顺序表输入数据：
sqlist l1;
scanf("%d",&l1.length);      //&的作用：追踪到length的地址，scanf将输入的值5存放在length的地址中，l1.length = 5
//scanf是把键盘输入的数据写进这个地址对应的内存中，使用时候需要“&”
//%d是格式化输出，%d是占位符，表示输出一个整数int
for(int i = 0;i<l1.length;i++){        
    scanf("%d",&l1.data[i]);
}
for(int j = 0;j<l1.length;j++){            //j可以用i变量，因为上面的i的作用域在上一个for循环中，已经释放
    printf("%d\n",l1.data[j]);
}                  
}

//顺序表查找：定义函数
//c语言中函数的定义：函数数据类型 函数名(参数数据类型 参数名，...){函数功能代码}
int add(int a,int b)        //函数定义，这里是形参，用来接收调用函数时传进来的数据
{
    return a + b;
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int sum = add(a,b);     //函数调用，这里是实参，就是调用函数的时候，真正传进去的数据
    printf("%d\n",sum);     //该用法是传值调用(将实参的值复制给形参)，修改形参并不会影响实参的值
    return 0;
}

void change(int *x)        //&取其地址   *访问该地址指向变量的值
{
    *x = 100;       //*x 的意思是：找到x保存的地址（此时x的内容储存了a的地址），然后访问那个(a)地址里的变量,令其等于100
}

int main()
{
    int a = 10;

    change(&a);      //该用法是传址调用(将实参的地址传给形参)，修改形参会影响实参的值
                     //其将a的地址传给了函数change，函数change通过指针x修改了a的值
    printf("%d", a);
}

//顺序表查找：定义函数：函数数据类型 函数名(参数数据类型 参数名，...){函数功能代码}
// int search(sqlist l,int key)
// {
//     //scanf("%d",&key);
//     for(int i = 0;i<l.length;i++)
//     {
//         if(l.data[i] == key)
//         {
//             return i+1;        //返回的是key在顺序表中的位置，位置从1开始计数,但数组下标是从0开始计数的，所以返回i+1
//         }
//     }
//     return 0;        //如果没有找到key，则返回0
// }

#include <stdio.h>
#define MAXSIZE 100

typedef struct{
    int data[MAXSIZE];
    int length;
}sqlist;

int search(sqlist l,int key)
{
    for(int i = 0;i<l.length;i++)
    {
        if(l.data[i] == key)
        {
            return i+1;        //返回的是key在顺序表中的位置，位置从1开始计数,但数组下标是从0开始计数的，所以返回i+1
        }
    }
    return 0;        //如果没有找到key，则返回0
}

//顺序表的插入：
//bool insert(sqlist l,int i,int e)      //第一个是操作的顺序表，第二个是插入的位置，第三个是插入的元素
bool insert(sqlist *l,int i,int e)
{
    ///if(i<1 || i>l.length+1)
    if(i<1 || i>l->length+1){        //插入位置不合法
        return false;
    }
    else{
        //for(int j = 0;j<l.length;j++){
           // l.data[l.length-j] =l.data[l.length-j+1];        //将顺序表中第i个位置及其之后的元素后移一位
        ///for(int j = l.length;j>=i;j--){
        ///    l.data[j] = l.data[j - 1];
        for(int j = l->length;j>=i;j--){
            l->data[j] = l->data[j - 1];
        }
       // l.data[i] = e;              //将e插入到顺序表的第i个位置
        ///l.data[i - 1] = e;          //将e插入到顺序表的第i(3)个位置，数组下标是从0开始计数的，所以要减1(0,1,2)
        ///l.length++;
        l->data[i - 1] = e;
        l->length++;
        return true;
    }                      ///顺序表的插入应该使用传址调用，然后成员（data && length）的访问应该使用“->”运算符
}

//顺序表的删除：
bool delete(sqlist *l,int i)
{
    if(i<1 || i>l->length)
    {
        return false;        //删除位置不合法
    }
    else{
        for(int j = i;j<l->length;j++){         //动的是哪些元素：i及其i之后的元素
            l->data[j - 1] = l->data[j];        //后面一个元素（x-1）覆盖前面的元素（x）
        }
        l->length--;
        return true;
    }
}

int main()
{
    sqlist d1;
    d1.length = 0;
    scanf("%d",&d1.length);      //输入个拟数组的真实有用长度
    for(int i = 0;i<d1.length;i++){
        scanf("%d",&d1.data[i]);       //为什么要加“.data”:因为d1是总的结构体变量，要精确到他其中一个变量
    }
    for(int i = 0;i<d1.length;i++){
        printf("%d\n",d1.data[i]);
    }
//    search(practice d1,e);     //虽然他们都是结构体，但是practice和sqlist是不同的结构体类型，类型不一致
    int e;
    scanf("%d",&e);
    int pos = search(d1,e);     //调用函数
    search(d1,e);               //调用函数，返回值没有被接收，函数的返回值会被丢弃
    printf("pos = %d\n",pos);      //打印返回值
    bool flag = insert(&d1,3,100);      //调用函数，传址调用
    printf("flag = %d\n",flag);      //打印返回值
    bool delete_flag = delete(&d1,3);      //调用函数，传址调用
    printf("delete_flag = %d\n",delete_flag);      //打印返回值

}



//单链表的创建：一个个节点 + 指针把节点串起来
typedef struct LNode{
    int data;                //数据域，存放数据
    struct LNode *next;      //指针域,next保留下一个节点的地址    node1->next得到的就是下一个节点的地址
}Node;                       //Node *p是指向结构体Node里的指针，p->data就是访问p指向节点的data

//c语言中指针下的相关知识：
//每定义一个变量都会为其分配一个内存地址
//通过&操作符号可以获取变量地址，使用类型+星号*的方式，可以定义指针变量
//指针变量储存地址（通常*和&一起使用），返回变量的地址，普通变量储存数据
int main(){
    int a = 10;
    printf("%p",&a);
    int *p = &a;           //   int* p  和   int *p效果一致
    p = &a;
    printf("%d",*p);
    *p = a;                 //解引用输出a的值
}
//a == &a[0]      
int main()
{   
    int a[]={1,2,3,4,5};
    int i = 0;             //i是数组的下标
    int *p = a;
    printf("%p",a);
    p++;
    a[i] == *(a+i);       //a指示第0个元素

}

/*单链表的创建（尾插法）：单链表的创建（尾插法）：首先创建一个点链表的结构体，
其次定义一个空链表的结构体变量（a），
然后for循环依次输入数据（i在for循环tital里,初始值为1）（scanf（e）是输入的数，在for循环里），
接下来就是分析如何从尾部添加变量：首先定义一个头指针int *p = a，接着p->next =a[i] ，p.data = e*/
//单链表不是用数组下标 a[i] 存储  
//头指针不是 int *p，而是结点指针 LNode *p
//尾插法不是 p->next=a[i]，而是通过尾指针连接新结点
typedef struct LNode{
    int data;
    struct LNode *next;
}lnode;
lnode *l=NULL;     //创建一个空链表
lnode *tail=NULL;        //创建一个尾指针
/*  lnode *M = (lnode*)malloc(sizeof(lnode));
    M->next = NULL;        创建一个带头节点的空链表         */
int main(){
    int n;
    scanf("&d",&n);            //该结构体里没有length，所以需要定义一个n变量确定长度
    for(int i = 0;i<n;i++){
        lnode *s = (lnode*)malloc(sizeof(lnode));       //创建一个新节点并读入数据
    //  指针 = （数据类型*）mallow（字节大小）    --（数据类型*）强转
        scanf("%d",&s->data);         //访问结构体变量s的数据域
        s->next = NULL;               //将输入数据的指针域设为NULL,此时只是设立了节点，还未接入链表
        if(l==NULL){          //有了头节点，首元节点的操作就不特殊了，可以不用if，直接else内容
            l=tail=s;         //头尾指针均指向结点s
        }else{
            tail->next = s;   //将尾结点的next指针指向结点s
            tail = s;         //尾指针指向新的尾结点
        }
        
    }
}

//有头节点时：
int main(){
    lnode *M = (lnode*)malloc(sizeof(lnode));
    M->next = NULL;
    lnode *tial = NULL;
    int n;
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        lnode *s = (lnode*)mallow(sizeof(lnode));
        scanf("%d",&s);
        s->next = NULL;
        tial->next = s;     //将mallow新创建的结点接入链表时只动尾结点就好（尾插）
        tail = s;

        s->next=l->next;
        l->next=s;         //头插法（顺序与输入顺序相反）
    }
}

//在l链表中查找值为e的结点:单链表查找不是通过数组下标，而是通过指针 next 一个一个往后走
lnode* find(lnode *l,int e){
    lnode *p=l->next;      //从第一个结点开始找，不知道找几次，所以用while循环
    while(p != NULL && p->data != e){
        p = p->next;
    }
    return p;
}

//在l链表中查找第k个结点：
lnode* findkth(lnode *l,int k)
{
    if(k<0) return NULL;
    lnode *p=l;           //设头节点为第0个结点
    int i= 0;
    while(p!=NULL&&i<k){
        p=p->next;
        i++;
    }
    return p;
}