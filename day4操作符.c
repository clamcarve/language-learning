/*移位操作符
#include<stdio.h>
//正整数原码，反码，补码相同
//负整数原码，反码，补码要计算
//
//7
//00000000000000000000000000000111 原码
//00000000000000000000000000000111 反码
//00000000000000000000000000000111 补码

//-7
//10000000000000000000000000000111 原码
//11111111111111111111111111111000 反码
//11111111111111111111111111111001 补码

//整数在内存中存的是补码
int main()
{
    int a=7;
    //a补码左移动，左边丢弃，右边补0
    int b=a<<1;
    printf("%d\n",b);
    
    //右移操作符
    int n=-4;
    printf("%d",n>>1);
    
    
    return 0;
}
*/

/*位操作符
#include<stdio.h>
//& 按位与 两个数的补码相比，位数有0才0，其它都1
//| 按位或
//^ 按位异或 不相同为1，相同为0
int main()
{
    int a =3;
    int b=-5;
    int c=a^b;
    //a补码
    //00000000000000000000000000000011
    //b补码
    //10000000000000000000000000000101
    //11111111111111111111111111111010
    //11111111111111111111111111111011 b补码
    //00000000000000000000000000000011 a补码
    //11111111111111111111111111111000 c补码
    //11111111111111111111111111110111 c反码
    //10000000000000000000000000001000 c原码
    printf("%d\n",c);
    //不创建临时变量交换a，b的值

    printf("交换前a：%d 交换前b：%d\n",a,b);
    //a^a=0;
    //0^a=a
    //异或操作符支持交换律
    a = a^b;//a=3^-5;
    b = a^b;//b=3^-5^-5,b=3
    a = a^b;//3^-5^3,a=-5
    printf("交换后a：%d 交换后b：%d",a,b);
    return 0;
}*/