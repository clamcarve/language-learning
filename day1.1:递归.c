/*
什么是递归：
程序调用自身的编程技巧称为递归
递归作为一种算法在程序设计语言中广泛运用。一个过程或函数在其定义或说明中有直接或间接调用自身的一种方法，它通常把一个大型复杂的问题转化为一个与原问题相似规模较小的问题来求解
递归的主要思想：大事化小

递归的两个必要条件：
存在限制条件
每次递归后越来越接近这个条件
*/


/*接受一个无符号整型值，按照顺序打印每一位
#include<stdio.h>

void print(unsigned int i)
{
    if(i>9)
    //必须判断，每次调用函数都会在栈区申请空间，会导致栈溢出，同样，在调用时i必须靠近条件
    {
        print(i/10);
    }
    printf("%d",i%10);
}

int main()
{
    unsigned int i=0;
    scanf("%u",&i);
    print(i);
    return 0;
}
*/
//利用递归倒叙输出i-0
#include <stdio.h>

int count(int i) {
    printf("%d\n", i);
    if (i < 1) {
        return 0;
    }
    return count(i - 1);
}

int main() {
    int i = 0;
    scanf("%d", &i);
    count(i);
    return 0;
}
