#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("Hello world \n");
    scanf("%d", &a);
    scanf("%d", &b);
    int c = a + b;
    printf("The sum of A + B  = %d", c);
    return 0;
}