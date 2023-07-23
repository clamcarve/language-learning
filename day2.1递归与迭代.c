/*
不利用临时变量求出字符串长度
#include <stdio.h>

#define MAX_LENGTH 100 // 定义字符串的最大长度

int getlen(char* inputString)
{
    if(*inputString != '\0')
    {
        return 1+getlen(inputString+1);
    }
    return 0;
}

int main() {
    char inputString[MAX_LENGTH];

    printf("请输入字符串（最多可输入%d个字符）：", MAX_LENGTH - 1);
    scanf("%99s", inputString); // 为了避免缓冲区溢出，使用%99s而不是%s

    printf("您输入的字符串是：%s\n", inputString);
    printf("%d",getlen(inputString));

    return 0;
}
*/

/*
求n的阶乘
//用递归的方式
#include<stdio.h>
int fac(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
        return n*fac(n-1);
    }
}

int main()
{
    int i=0;
    scanf("%d",&i);
    printf("%d",fac(i));
    return 0;
}

//用迭代的方式
#include<stdio.h>
int fac(int n)
{
    int ret=1;
    for(int i=1;i<=n;i++)
    {
        ret=ret*i;
    }
    return ret;
}
int main()
{
    int n=0;
    scanf("%d",&n);
    printf("%d",fac(n));
    return 0;
}
*/

/*
用递归求第n个斐波那契数列，效率低下
#include<stdio.h>
int fib(int n)
{
    if(n<=2)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}
int main()
{
    int n=1;
    while(scanf("%d",&n))
    {
        printf("%d\n",fib(n));
    }
    return 0;
}
*/

/*
用迭代求第n个斐波那契数列
效率高
#include<stdio.h>
int fib(int n)
{
    int a=1;
    int b=1;
    int c=2;
    while(n>=3)
    {
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    return c;
}
int main()
{
    int n=0;
    scanf("%d",&n);
    printf("%d\n",fib(n));
    return 0;
}
*/
