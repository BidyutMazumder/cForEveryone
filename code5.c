#include<stdio.h>
#include<math.h>
int main()
{
    float r, result;
    scanf("%f", &r);
    result = 2 * 3.1416 * pow(r, 2);
    // home work  x^3 + x^2 + 2x
    printf("%.2f\n", result);
    return 0;
}
