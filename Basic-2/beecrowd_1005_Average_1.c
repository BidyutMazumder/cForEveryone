#include<stdio.h>
int main()
{
    double A, B, Result;
    scanf("%lf %lf", &A, &B);

    A = A * 3.5;
    B = B * 7.5;
    //home work "https://www.beecrowd.com.br/judge/en/problems/view/1006"

    Result = (A + B) / (3.5 + 7.5);
    printf("MEDIA = %.5lf\n", Result);
    return 0;
}
