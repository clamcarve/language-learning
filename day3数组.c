/*
数组在内存中是连续存放的
#include<stdio.h>

int main()
{
    int arr[100]={0};
    int sz=0;
    sz=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<sz;i++)
    {
        printf("第%d个数组元素的地址是：%p\n",i,&arr[i]);
    }
    return 0;
}
*/

/*
//二维数组初始化
#include<stdio.h>

int main()
{
    printf("二维数组1：\n");
    int arr1[3][4]={1,2,3,4,5,6,7,8,9,0,1,2};
    //1,2,3,4
    //5,6,7,8
    //9,0,1,2
    int i =0;
    int j=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\narr1[%d][%d]的地址：%p\n",i,j,&arr1[i][j]);
        }
        printf("\n");
    }
    
    printf("二维数组2第2行第2列：\n");
    int arr2[3][3]={{1,2},{2,4},{7,8,9}};
    //1,2,x
    //2,4,x
    //7,8,9
    printf("%d\n",arr2[1][1]);
    
    printf("二维数组3第2行第2列：\n");
    int arr3[][4]={2,5,8,0,1,4,7};
    //列不能省略，行可以省，会自动判断
    printf("%d\n",arr3[1][1]);
    return 0;
}
*/

/*
二维数组冒泡排序
#include<stdio.h>
//二维数组冒泡排序
void bubble_sort(int arr[],int sz)
{
    int i=0;
    for(i=0;i<sz;i++)
    {
        int j=0;
        for(j=0;j<sz-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int tem=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tem;
            }
        }
    }
}

int main()
{
    int arr[]={1,2,8,4,7,9,2,5,9,4,3,0};
    int sz=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,sz);
    for(int n=0;n<sz;n++)
    {
        printf("%d\n",arr[n]);
    }
    return 0;
}
*/