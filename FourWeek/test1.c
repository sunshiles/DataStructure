#include <stdio.h>
int main()
{
    char a[] = "i am boy!";
    char b[20];
    int i;
    for (i = 0; *(a + i) != '\0'; i++)
        *(b + i) = *(a + i);
    *(b + i) = '\0';
    printf("%s\n", a);
    printf("%s\n", b);
    return 0;
}