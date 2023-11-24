#include<stdio.h>
int main()
{
    int value, result;
    printf("Input the number: ");
    scanf("%d", &value);

    result = value % 10;

    printf("Result: %d\n", result);
    return 0;
}
