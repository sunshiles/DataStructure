#include <stdio.h>
/*
有n个整数，使前面各数顺序向后移m个位置，最后m个数变成最前面m个数。
写一函数实现以上功能，在主函数中输入n个整数和输出调整后的n个数。
*/
int main()
{
    void swap(int *a, int m);
    int arr[10]; //n = 10;
    for (int *i = arr; i <= &arr[9]; i++)
    {
        scanf("%d", i);
    }
    printf("\n");
    swap(arr, 3);
    for (int *i = arr; i <= &arr[9]; i++)
    {
        printf("%d\t", *i);
    }

    return 0;
}

void swap(int *a, int m)
{
    int t;
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        arr2[i] = a[i];
    }
    for (int *i = a; i < a + (10 - m); i++)
    {
        *i = *(i + m);
    }
    for (int i = 0; i < m; i++)
    {
        a[10 - m + i] = arr2[i];
    }
}