#include <stdio.h>
void main()
{
    void swap(int a, int b);
    int a, b;   

    scanf("%d,%d", &a, &b);

    if (a < b)
        swap(a, b);
    printf("\n%d,%d\n", a, b);
}
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
