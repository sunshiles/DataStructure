#include <stdio.h>
/*
有n个整数，使前面各数顺序向后移m个位置，最后m个数变成最前面m个数。
写一函数实现以上功能，在主函数中输入n个整数和输出调整后的n个数。
*/
int main()
{
    void swap(int *a, int m, int m1);
    int n;
    int t;
    printf("请输入数组的长度：\n");
    scanf("%d", &n);
    int arr[n]; //n = 10;
    printf("输入移动的位数：\n");
    scanf("%d", &t);
    printf("输入值：\n");
    for (int *i = arr; i <= &arr[n - 1]; i++)
    {
        scanf("%d", i);
    }
    printf("\n");
    swap(arr, t, n);
    for (int *i = arr; i <= &arr[n - 1]; i++)
    {
        printf("%d\t", *i);
    }

    return 0;
}

void swap(int *a, int m, int m1)
{
    int t;
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        arr2[i] = a[i];
    }
    for (int *i = a; i < a + (m1 - m); i++)
    {
        *i = *(i + m);
    }
    for (int i = 0; i < m; i++)
    {
        a[m1 - m + i] = arr2[i];
    }
}